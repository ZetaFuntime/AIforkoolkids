#pragma once
#include <glm/vec2.hpp>
#include <list>
#include "IBehaviour.h"

using glm::vec2;
using std::list;

class Agent
{
public:

	void Update(float deltaTime);

private:

protected:

	std::list< IBehaviour * > m_behaviours;

	vec2 m_force;
	vec2 m_acceleration;
	vec2 m_velocity;
	vec2 m_position;
};