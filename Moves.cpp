#include "stdafx.h"
#include "Moves.h"
#include <string>
using namespace std;

Moves::Moves()
{

}


Moves::~Moves()
{

}

void Moves::SetInfo(string name, string type, int damage)
{
	this->name = name;
	this->type = type;
	this->damage = damage;

}

string Moves::GetType() {
	return this->type;
}

string Moves::GetName() {
	return this->name;
}

int Moves::GetDamage() {
	return this->damage;
}