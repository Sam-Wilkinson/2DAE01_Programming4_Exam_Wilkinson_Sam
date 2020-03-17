#pragma once
#include "GraphicsComponent.h"
#include "Texture2D.h"
#include "Font.h"
#include "Transform.h"

class TextGraphicsComponent : public GraphicsComponent
{
public:
	TextGraphicsComponent(const std::string& text, const std::shared_ptr<dae::Font>& font) 
		:GraphicsComponent{}, m_Text{ text }, m_Font{ font }, m_Texture{nullptr}
	{};
	virtual ~TextGraphicsComponent() = default;

	virtual void Update(const float deltaTime, const dae::SceneObject& object) override;
	virtual void Render(const dae::SceneObject& object) const override;


	TextGraphicsComponent(const TextGraphicsComponent& other) = delete;
	TextGraphicsComponent(TextGraphicsComponent&& other) = delete;
	TextGraphicsComponent& operator=(const TextGraphicsComponent& other) = delete;
	TextGraphicsComponent& operator=(TextGraphicsComponent&& other) = delete;

protected:
	std::string m_Text;
	std::shared_ptr<dae::Font> m_Font;
	std::shared_ptr<dae::Texture2D> m_Texture;

private:
};

