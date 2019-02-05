#pragma once

//=======HEADERS===============================================================
#include <iostream>
#include <iomanip>
#include <string>
#include <stdio.h>

#include "Pawn.h"
//=============================================================================

class Player
{
public:
	Player();
	~Player();

	std::string getName() const { return sPname; }
	void setName(std::string n)
	{
		sPname = n;
	}

	int getPawnLeft() const { return iPawnsLeft; }


	//Function to input player data
	Player inputPdata(Player player);

	//Function to display player data
	Player displayPdata(Player player);

private:
	std::string		sPname;
	int				iPawnsLeft;
	
};
//==============================================================================
