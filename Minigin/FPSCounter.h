#pragma once
#include "SceneObject.h"
#include "GraphicsComponent.h"
#include "Transform.h"

class FPSCounter : public dae::SceneObject
{
public:
	FPSCounter(GraphicsComponent* pGraphicsComponent) : m_pGraphicsComponent{ pGraphicsComponent } {};
	virtual ~FPSCounter() { delete m_pGraphicsComponent; };

	void Update(const float deltaTime) override;
	void Render() const override;

	
private:
	GraphicsComponent* m_pGraphicsComponent;
};

