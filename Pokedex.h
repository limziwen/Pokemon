#pragma once
#ifndef Pokedex_H
#define Pokedex_H
#include "string"
#include "Pokemon.h"
#include "Moves.h"
#include <string>
using namespace std;

class Pokedex
{
private:
	Pokemon pokedex[15]; // 15 Pokemon
	Moves movesArray[99]; //99 available moves


public:
	
	
	Pokedex(); 
	~Pokedex();

	Pokemon GetRandomPokemon();
	Moves GetMoveArray();



};
#endif

