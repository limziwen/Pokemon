#include "stdafx.h"
#include "Player.h"
#include <string>

Player::Player()
{
	this->ptr = 0;
}


void Player::SetName(string name)
{
	this->name = name;
}

string Player::GetName()
{
	return this->name;
}

Player::~Player()
{
}

void Player::AddPokemon(Pokemon newPokemon, Moves movesArray[99])
{
	if (this->ptr < 6) {
		this->PokemonArray[ptr] = newPokemon;
		cout << "Pokemon Name: " << this->PokemonArray[ptr].GetName() << endl;
		//if (ptr == 0) {
		//	//1st pokemon, the starter, will have its moves populated
		//	PokemonArray[ptr].PopulateMoves(movesArray);
		//}
		ptr = ptr + 1;
	}
}

Pokemon Player::SendPokemon(int ptr)
{
	return this->PokemonArray[ptr];
}

int Player::ReturnPointer() {
	return this->ptr;
}


