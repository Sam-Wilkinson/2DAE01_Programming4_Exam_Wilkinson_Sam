#pragma once
#include "BaseComponent.h"
#include "Transform.h"

class GraphicsComponent : public BaseComponent
{
public:
	GraphicsComponent() = default;
	virtual ~GraphicsComponent() = default;

	virtual void Update(const float deltaTime, const dae::SceneObject& object) override;
	virtual void Render(const dae::SceneObject& object) const override;

	GraphicsComponent(const GraphicsComponent& other) = delete;
	GraphicsComponent(GraphicsComponent&& other) = delete;
	GraphicsComponent& operator=(const GraphicsComponent& other) = delete;
	GraphicsComponent& operator=(GraphicsComponent&& other) = delete;

private:

};

