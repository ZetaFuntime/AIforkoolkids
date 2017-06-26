#pragma once

////////////////////////////////////////////////////////////////////////////////////
////																			////
////	Exercises:																////
////																			////
////	- Create Agent Class													////
////		- Has position / image / update and draw method						////
////	- Add instance of agent to app											////
////	- Make sure it can compile and see the agent on screen					////
////																			////
////	- Create an IBehaviour class											////
////	- Add a collection of "IBehaviour pointers" to the Agent				////
////	- Update the IBehaviour for the agent									////
////																			////
////	- Create a basic "KeyboardController" behaviour							////
////	- Add the behaviour to the agent in your application class				////
////	- agent should now be able to be controlled by keyboard					////
////																			////
////																			////
////																			////
////																			////
////////////////////////////////////////////////////////////////////////////////////
#include "Application.h"
#include "Renderer2D.h"

class _2017_2606_AIAgentsApp : public aie::Application {
public:

	_2017_2606_AIAgentsApp();
	virtual ~_2017_2606_AIAgentsApp();

	virtual bool startup();
	virtual void shutdown();

	virtual void update(float deltaTime);
	virtual void draw();

protected:

	aie::Renderer2D*	m_2dRenderer;
	aie::Font*			m_font;
};