#pragma once
#include <iostream>
#include "string"
using namespace std;

class Items
/*
Abstract Class
BaseClass to Pokeball, Health Potions
*/
{
private:

public:
	Items();
	~Items();

	virtual int Use();

};

