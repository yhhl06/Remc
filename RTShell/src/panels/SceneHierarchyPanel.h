#pragma once

#include "Remc/Core/Base.h"
#include "Remc/Core/Log.h"
#include "Remc/Scene/Scene.h"
#include "Remc/Scene/Entity.h"

namespace Remc {

	class SceneHierarchyPanel
	{
	public:
		SceneHierarchyPanel() = default;
		SceneHierarchyPanel(const Ref<Scene>& scene);

		void SetContext(const Ref<Scene>& scene);

		void OnImGuiRender();
	private:
		void DrawEntityNode(Entity entity);
		void DrawComponents(Entity entity);
	private:
		Ref<Scene> m_Context;
		Entity m_SelectionContext;
	};

}