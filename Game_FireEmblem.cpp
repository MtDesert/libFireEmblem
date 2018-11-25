#include"Game_FireEmblem.h"

#include"LuaState.h"

Game* Game::newGame(){return new Game_FireEmblem();}

Game_FireEmblem::Game_FireEmblem(){
	LuaState state;
	state.doFile("datas/Enum.lua");//打开枚举文件
	state.readEnum("WeaponType",weaponType);//读取武器类型枚举
	state.readEnum("Attributes",attributes);//读取属性枚举
}
Game_FireEmblem::~Game_FireEmblem(){}

void Game_FireEmblem::consumeTimeSlice(){}