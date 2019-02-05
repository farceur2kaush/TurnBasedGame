#pragma once

//==================HEADERS=============================================
#include <iostream>
#include <iomanip>
#include <string>
#include <stdio.h>
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
	void setPawnType(int r, int c)
	{
		iRow = r;
		iColumn = c;
	}

	int getPtype() const { return iPtype[5]; }
	void setDamage(int Ptype[5])
	{
		iPtype[5] = Ptype[5];
	}

	void displayPawntypes();

	Pawn selectPawn(Pawn pawn, int x);

private:
	int		iHealth;
	int		iDamage;
	int	    iRow;
	int		iColumn;
	int		iPtype[5];
};

//======================================================================
