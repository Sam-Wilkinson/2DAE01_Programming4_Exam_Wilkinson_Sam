#include "MiniginPCH.h"
#include "FPSGraphicsComponent.h"

void FPSGraphicsComponent::Update(const float deltaTime, const dae::SceneObject& object)
{
	//TODO code to calculate fps

	m_Text = std::to_string(1/deltaTime);
	
	TextGraphicsComponent::Update(deltaTime, object);

}

