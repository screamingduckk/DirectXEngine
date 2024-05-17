#include "AppWindow.h"
#include "InputSystem.h"
#include <exception>


int main()
{

	try
	{
		GraphicsEngine::create();
		InputSystem::create();
	}
	catch (...) { return -1; }

	{
		try
		{
			AppWindow app;
			while (app.isRun());
		}
		catch (...) 
		{ 
			InputSystem::release();
			GraphicsEngine::release();

			return 0;
			throw std::exception("App broadcast failed"); 
		}
		
	}
	InputSystem::release();
	GraphicsEngine::release();

	return 0;
}