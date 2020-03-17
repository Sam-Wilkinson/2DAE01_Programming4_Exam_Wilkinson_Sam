#pragma once
#include "BaseComponent.h"
class GraphicsComponent : public BaseComponent
{
public:
	GraphicsComponent() = default;
	virtual ~GraphicsComponent();

	virtual void Update(const float deltaTime);
	virtual void Render();

	GraphicsComponent(const GraphicsComponent& other) = delete;
	GraphicsComponent(GraphicsComponent&& other) = delete;
	GraphicsComponent& operator=(const GraphicsComponent& other) = delete;
	GraphicsComponent& operator=(GraphicsComponent&& other) = delete;

private:

};

