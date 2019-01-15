#pragma once

//==================HEADERS=============================================
#include <iostream>
#include <string>
#include <cstdio>
//======================================================================
class Pawn
{
public:
	Pawn();
	~Pawn();

	int getHealth() const { return iHealth; }
	void setHealth(int h) 
	{ 
		iHealth = h; 
	}

	int getDamage() const { return iDamage; }
	void setHealth(int d) 
	{ 
		iDamage = d; 
	}

	void attack() { }

private:
	int iHealth;
	int iDamage;
};

