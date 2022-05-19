#include "hzpch.h"
#include "Application.h"
#include "Hazel/Events/ApplicationEvent.h"
#include "Hazel/Events/KeyEvent.h"
#include "Hazel/Events/MouseEvent.h"
#include "Hazel/Log.h"

namespace Hazel {

	Application::Application()
	{

	}
	Application::~Application()
	{

	}

	void Application::Run()
	{
		WindowResizeEvent e(1280, 720);
		
		if (e.IsInCategory(EventCategoryApplication))
		{
			HZ_INFO(e);
		}
		if (e.IsInCategory(EventCategoryInput))
		{
			HZ_INFO(e);
		}

		
		MouseButtonPressedEvent mouse(1);
		if (mouse.IsInCategory(EventCategoryMouse))
		{
			HZ_TRACE(mouse);
		}
		if (mouse.IsInCategory(EventCategoryInput))
		{
			HZ_TRACE(mouse);
		}

		KeyReleasedEvent key(1);
		if (key.IsInCategory(EventCategoryKeyboard))
		{
			HZ_TRACE(key);
		}
		if (key.IsInCategory(EventCategoryInput))
		{
			HZ_TRACE(key);
		}
		
		
		while (true);
	}
}