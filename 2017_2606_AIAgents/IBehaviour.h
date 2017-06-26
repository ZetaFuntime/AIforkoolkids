#pragma once
#include "Agent.h"

class IBehaviour
{
public:
	virtual void Update(Agent *agent, float deltaTime);


};
/*class KeyboardController
{
public:

	int upKey;
	int downKey;
	int leftKey;
	int rightKey;
	float moveSpeed;

	virtual void Update(Agent *agent, float deltaTime);

protected:
private:
};*/