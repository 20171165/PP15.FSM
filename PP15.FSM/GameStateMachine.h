#include "GameState.h"

class GameStateMachine
{
public:
	void changeState(GameState* pState);
	void popState();
	void update();
	void render();
	void pushState(GameState *pState);

	std::vector<GameState*> m_gameStates;

private:
	GameState * m_currentState;
	GameState* m_prevState;
};
