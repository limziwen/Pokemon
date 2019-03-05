#include "stdafx.h"
#include "Pokemon.h"
#include "string"
#include <ctime> //for time
#include <cstdlib> //for srand and rand
using namespace std;
// Function definition

Pokemon::Pokemon()
{

}

void Pokemon::SetInfo(string name, string type, int health)
{
	this->name = name;
	this->type = type;
	this->health = health;

}
Moves Pokemon::DisplayPokemonMoves()
{
	/*for (int x = 0; x < 4; x++) {
		cout << "Move " << x + 1 << ": " << this->moveArray[x].GetName() << "	Type: " << this->moveArray[x].GetType() << "Base Damage " << this->moveArray[x].GetDamage() << endl;
	}*/
	return this->moveArray[4];
}




void Pokemon::PopulateMoves(Moves movesArray[])
{
	
	
//Randomly select 4 moves of the same type
/*
A pokemon can be assigned its type and normal moves
1. Generate a random number, check type if the same or normal
2. Check to see if move not already present
3. Add to move array if not present
*/

	int repeat[4] = {-1,-1,-1,-1};

	bool unique = true;
	int randomNum;
	int count = 0;

	srand((unsigned)time(0));
	//Use current time as seed, the number used to generate a pseudorandom number

	do 
	{
		
		randomNum = rand() % 100; //Produces a random number from 0 to 99, using time

		//cout << "Random number is " << randomNum << endl;
		for (int y = 0; y < 4; y++) {
			if (randomNum == repeat[y]) {
				unique = false;
			}
		};
		if (unique == true && (this->type == movesArray[randomNum].GetType() || (movesArray[randomNum].GetType() == "NORMAL" && count != 0))) {
			/*
			1st move is always the same type as Pokemon
			*/
			this->moveArray[count] = movesArray[randomNum];
			//cout << "count is " << count <<endl;
			count = count + 1;
			repeat[count] = randomNum;
			cout << randomNum << endl;
			
		}
		unique = true;
	} while (count < 4);
	
	/*for (int x = 0; x < 4; x++) {
		cout << "Move " << x+1 << ": " << moveArray[x].GetName() << "	Type: " << moveArray[x].GetType() << "Base Damage " << moveArray[x].GetDamage() << endl;
	}*/
}

string Pokemon::GetName()
{
	return this->name;
}

string Pokemon::GetType()
{
	return this->type;
}

int Pokemon::GetHealth()
{
	return this->health;
}


Pokemon::~Pokemon()
{

}
