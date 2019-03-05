#pragma once
#ifndef Player_H
#define Player_H
#include "Pokemon.h"
#include "string"

using namespace std;

class Player
{
private:
	Pokemon PokemonArray[6];
	//need pointer to hold location of next free space
	string name;
	int ptr; //Holds positon of next empty space


public:
	Player(); //set ptr to 0

	~Player();

	void AddPokemon(Pokemon, Moves[99]);

	void SetName(string);
	string GetName();
	/*void DisplayPokemonMoves(int);*/
	int ReturnPointer();
	Pokemon SendPokemon(int);
};
#endif

