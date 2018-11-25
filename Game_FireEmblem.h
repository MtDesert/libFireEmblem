#ifndef GAME_FIREEMBLEM_H
#define GAME_FIREEMBLEM_H

#include"Game.h"
#include"EnumType.h"

//游戏模块本体,负责整体管理
class Game_FireEmblem:public Game{
public:
	Game_FireEmblem();
	~Game_FireEmblem();
protected:
	void consumeTimeSlice();
	EnumType weaponType;//武器类型
	EnumType attributes;//属性类型
};

#endif