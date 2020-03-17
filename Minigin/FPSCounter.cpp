#include "MiniginPCH.h"
#include "FPSCounter.h"

void FPSCounter::Update(const float deltaTime)
{
	m_pGraphicsComponent->Update(deltaTime, *this);
}

void FPSCounter::Render() const
{
	m_pGraphicsComponent->Render(*this);
}
