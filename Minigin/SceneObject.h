#pragma once
#include "Transform.h"

namespace dae
{
	class SceneObject
	{
	public:
		virtual void Update(const float deltaTime) = 0;
		virtual void Render() const = 0;

		SceneObject() = default;
		virtual ~SceneObject() = default;
		SceneObject(const SceneObject& other) = delete;
		SceneObject(SceneObject&& other) = delete;
		SceneObject& operator=(const SceneObject& other) = delete;
		SceneObject& operator=(SceneObject&& other) = delete;

		const dae::Transform& getTransform() const { return m_Transform; };
		void SetPosition(float x, float y) { m_Transform.SetPosition(x, y, 0); };

	protected:
		dae::Transform m_Transform;

	private:
	};
}
