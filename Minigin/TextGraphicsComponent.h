#pragma once
#include "GraphicsComponent.h"
#include "Texture2D.h"
#include "Font.h"
#include "Transform.h"

class TextGraphicsComponent : public GraphicsComponent
{
	TextGraphicsComponent(const std::string& text, const std::shared_ptr<dae::Font>& font);
	virtual ~TextGraphicsComponent();

	virtual void Update(const float deltaTime);
	virtual void Render();


	TextGraphicsComponent(const TextGraphicsComponent& other) = delete;
	TextGraphicsComponent(TextGraphicsComponent&& other) = delete;
	TextGraphicsComponent& operator=(const TextGraphicsComponent& other) = delete;
	TextGraphicsComponent& operator=(TextGraphicsComponent&& other) = delete;

private:

	bool m_NeedsUpdate;
	std::string m_Text;
	dae::Transform m_Transform;
	std::shared_ptr<dae::Font> m_Font;
	std::shared_ptr<dae::Texture2D> m_Texture;


};

