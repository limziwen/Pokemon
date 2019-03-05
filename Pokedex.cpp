#include "stdafx.h"
#include "Pokedex.h"
#include "Pokemon.h"
#include "Moves.h"
#include <string>
#include <ctime>
#include <iostream>

using namespace std;
/*
Holds an array of pokemon, that creates pokemon objects, using names, moves
*/
Pokedex::Pokedex()
{

	//instantiates all existing pokemon
	this->pokedex[0].SetInfo("Bulbasaur", "GRASS", 100);
	this->pokedex[1].SetInfo("Charmander", "FIRE", 100);
	this->pokedex[2].SetInfo("Squirtle", "WATER", 100);
	this->pokedex[3].SetInfo("Caterpie", "BUG", 50);
	this->pokedex[4].SetInfo("Pidgey", "FLYING", 50);
	this->pokedex[5].SetInfo("Rattata", "NORMAL", 50);
	this->pokedex[6].SetInfo("Ekans", "POISON", 80);
	this->pokedex[7].SetInfo("Pikachu", "ELECTRIC", 80);
	this->pokedex[8].SetInfo("Sandshrew", "GROUND", 80);
	this->pokedex[9].SetInfo("Abra", "PHYSIC", 80);
	this->pokedex[10].SetInfo("Machop", "FIGHTING", 110);
	this->pokedex[11].SetInfo("Haunter", "GHOST", 120);
	this->pokedex[12].SetInfo("Onix", "ROCK", 120);
	this->pokedex[13].SetInfo("Dratini", "DRAGON", 150);
	this->pokedex[14].SetInfo("Lapras", "ICE", 150);
	
}



Pokedex::~Pokedex()
{
}

//Moves Pokedex::PopulateMoves() 
//{
//	//instantiates all moves
//
//	
//}

Pokemon Pokedex::GetRandomPokemon()
{

	int randomNum;

	srand((unsigned)time(0));

	randomNum = rand() % 15; //Produces a random number from 0 to 14, using time

	return this->pokedex[randomNum];

	
	
}

Moves Pokedex::GetMoveArray()
{
	return this->movesArray[99];

}
