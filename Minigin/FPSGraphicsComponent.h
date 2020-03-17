#pragma once
#include "TextGraphicsComponent.h"
#include "TextObject.h"
#include "Font.h"
#include "Texture2D.h"

class FPSGraphicsComponent final : public TextGraphicsComponent
{
public:
	FPSGraphicsComponent(const std::shared_ptr<dae::Font>& font) : TextGraphicsComponent{ "", font } {};
	virtual ~FPSGraphicsComponent() = default;

	FPSGraphicsComponent(const FPSGraphicsComponent& other) = delete;
	FPSGraphicsComponent(FPSGraphicsComponent&& other) = delete;
	FPSGraphicsComponent& operator=(const FPSGraphicsComponent& other) = delete;
	FPSGraphicsComponent& operator=(FPSGraphicsComponent&& other) = delete;

	void Update(const float deltaTime, const dae::SceneObject& object) override;
//	void Render(const dae::SceneObject& object) const override;

private:
};

