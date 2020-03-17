#include "MiniginPCH.h"
#include "TextGraphicsComponent.h"

#include <SDL.h>
#include <SDL_ttf.h>
#include "Renderer.h"

void TextGraphicsComponent::Update(const float deltaTime, const dae::SceneObject& object)
{
	(void)object;
	(void)deltaTime;

	const SDL_Color color = { 255,255,255 }; // only white text is supported now
	const auto surf = TTF_RenderText_Blended(m_Font->GetFont(), m_Text.c_str(), color);
	if (surf == nullptr)
	{
		throw std::runtime_error(std::string("Render text failed: ") + SDL_GetError());
	}
	auto texture = SDL_CreateTextureFromSurface(dae::Renderer::GetInstance().GetSDLRenderer(), surf);
	if (texture == nullptr)
	{
		throw std::runtime_error(std::string("Create text texture from surface failed: ") + SDL_GetError());
	}
	SDL_FreeSurface(surf);
	m_Texture = std::make_shared<dae::Texture2D>(texture);

}

void TextGraphicsComponent::Render(const dae::SceneObject& object) const
{
	if (m_Texture != nullptr)
	{
		const auto pos = object.getTransform().GetPosition();
		dae::Renderer::GetInstance().RenderTexture(*m_Texture, pos.x, pos.y);
	}

}
