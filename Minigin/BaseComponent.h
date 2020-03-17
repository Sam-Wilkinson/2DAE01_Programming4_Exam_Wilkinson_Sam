#pragma once
class BaseComponent
{
public:
	virtual void Update(const float deltaTime);
	virtual void Render();

	BaseComponent(const BaseComponent& other) = delete;
	BaseComponent(BaseComponent&& other) = delete;
	BaseComponent& operator=( const BaseComponent& other) = delete;
	BaseComponent& operator=(BaseComponent&& other) = delete;

protected:

	BaseComponent() = default;
	virtual ~BaseComponent();

private:


};

