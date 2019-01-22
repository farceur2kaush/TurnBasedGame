#pragma once

//=======HEADERS===============================================================
#include <iostream>
#include <string>
#include <stdio.h>
//=============================================================================

using namespace std;

class Player
{
public:
	Player();
	~Player();

	string getName() const { return sPname; }
	void setName(string n)
	{
		sPname = n;
	}

	int getPawnLeft() const { return iPawnsLeft; }
	void setPawnLeft(int l)
	{
		iPawnsLeft = l;
	}

	//Function to input player data
	Player inputPdata(Player player);

	//Function to display player data
	Player displayPdata(Player player);

private:
	string	sPname;
	int		iPawnsLeft;
	
};
//==============================================================================
