#pragma once
#include "TextGraphicsComponent.h"
#include "TextObject.h"


class FPSGraphicsComponent final : public TextGraphicsComponent
{
public:
	FPSGraphicsComponent();
	virtual ~FPSGraphicsComponent();

	FPSGraphicsComponent(const FPSGraphicsComponent& other) = delete;
	FPSGraphicsComponent(FPSGraphicsComponent&& other) = delete;
	FPSGraphicsComponent& operator=(const FPSGraphicsComponent& other) = delete;
	FPSGraphicsComponent& operator=(FPSGraphicsComponent&& other) = delete;

	void Update(const float deltaTime) override;
	void Render() override;

private:


	
};

