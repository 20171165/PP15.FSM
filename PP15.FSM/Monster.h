#pragma once
#include "SDLGameObject.h"

class Monster : public SDLGameObject
{
public:
	Monster(const LoaderParams* pParams);
	~Monster() {}

	virtual void draw();
	virtual void update();
	virtual void clean();
	void control(float m_x, float m_y, int currentFrame);
private:
	bool goR = true;
};