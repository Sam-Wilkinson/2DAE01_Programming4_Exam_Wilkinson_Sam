#pragma once
#include "SceneObject.h"

class BaseComponent
{
public:
	virtual void Update(const float deltaTime, const dae::SceneObject& object) = 0;
	virtual void Render(const dae::SceneObject& object) const = 0;

	BaseComponent(const BaseComponent& other) = delete;
	BaseComponent(BaseComponent&& other) = delete;
	BaseComponent& operator=( const BaseComponent& other) = delete;
	BaseComponent& operator=(BaseComponent&& other) = delete;

protected:

	BaseComponent() = default;
	virtual ~BaseComponent() = default;

private:


};

