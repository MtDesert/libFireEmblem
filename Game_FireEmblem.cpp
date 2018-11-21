#include"Game_FireEmblem.h"
#include<stdio.h>

Game* Game::newGame(){return new Game_FireEmblem();}

Game_FireEmblem::Game_FireEmblem(){}
Game_FireEmblem::~Game_FireEmblem(){}

void Game_FireEmblem::consumeTimeSlice(){}