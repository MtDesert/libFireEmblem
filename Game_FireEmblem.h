#ifndef GAME_FIREEMBLEM_H
#define GAME_FIREEMBLEM_H

#include"Game.h"
#include"LuaState.h"

class Game_FireEmblem:public Game{
public:
	Game_FireEmblem();
	~Game_FireEmblem();
protected:
	void consumeTimeSlice();
	LuaState *enumState;
};

#endif