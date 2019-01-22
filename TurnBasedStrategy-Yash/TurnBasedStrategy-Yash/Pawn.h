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

	int type[5][5];

	int getHealth() const { return iHealth; }
	void setHealth(int h) 
	{ 
		iHealth = h; 
	}

	int getDamage() const { return iDamage; }
	void setDamage(int d) 
	{ 
		iDamage = d; 
	}

	int getPawnType() const { return iRow, iColumn; }
	void setPawnType(int r,int c)
	{
		iRow = r;
		iColumn = c;
	}



private:
	int		iHealth;
	int		iDamage;
	int	    iRow;
	int		iColumn;
};

//======================================================================
