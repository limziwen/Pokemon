#pragma once
#include <iostream>
#ifndef Pokemon_H
#define Pokemon_H
#include <string>
#include "Moves.h"
using namespace std;


class Pokemon
	// Function Prototypes
{
private:
	int health;
	string name;
	string type;
	Moves moveArray[4]; //Each Pokemon has 4 moves, will be randomly assigned based on its type
	

	
public:
	Pokemon();
	void SetInfo(string, string, int);
	~Pokemon();

	void PopulateMoves(Moves[]); 
	Moves DisplayPokemonMoves();

	string GetName();
	string GetType();
	int GetHealth();
};
#endif

