#pragma once

#include "Remc/Layer.h"

#include "Remc/Events/ApplicationEvent.h"
#include "Remc/Events/KeyEvent.h"
#include "Remc/Events/MouseEvent.h"

namespace Remc {

	class REMC_API ImGuiLayer : public Layer
	{
	public:
		ImGuiLayer();
		~ImGuiLayer() = default;

		virtual void OnAttach() override;
		virtual void OnDetach() override;
		virtual void OnImGuiRender() override;

		void Begin();
		void End();
	private:
		float m_Time = 0.0f;
	};

}