#pragma once
#include <string>
using namespace std;

class Moves
{
private:
	string name;
	string type;
	int damage;

public:
	Moves();

	~Moves();

	void SetInfo(string, string, int);

	string GetType();
	string GetName();
	int GetDamage();

};

