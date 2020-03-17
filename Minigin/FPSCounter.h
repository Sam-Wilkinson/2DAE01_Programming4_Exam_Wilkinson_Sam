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

	void SetText(const std::string& text);
	void SetPosition(float x, float y);

	
private:
	GraphicsComponent* m_pGraphicsComponent;
	dae::Transform m_Transform;
};

