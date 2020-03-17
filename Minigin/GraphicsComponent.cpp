#include "MiniginPCH.h"
#include "GraphicsComponent.h"

void GraphicsComponent::Update(const float deltaTime, const dae::SceneObject& object)
{
	(void)object;
	(void)deltaTime;
}

void GraphicsComponent::Render(const dae::SceneObject& object) const
{
	(void)object;
}
