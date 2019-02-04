//=============HEADERS==================================================================================
#include "pch.h"
#include "Player.h"
//======================================================================================================

Player::Player()
{

}


Player::~Player()
{
}

//====================================FUNCTIONS=========================================================


Player Player::inputPdata(Player player)
{
	std::cout << "Enter Player Name				:	";
	std::cin >> player.sPname;
	//getline(std::cin, player.sPname);
	std::cout << std::endl;
	return player;
}

Player Player::displayPdata(Player player)
{
	std::cout << std::endl;
	std::cout << "Players Attribute	: " << std::endl;
	std::cout << std::setw(20) <<"Name				:	" << player.sPname << std::endl;
	std::cout << std::setw(20) <<"Pawns Alive		:	" << player.iPawnsLeft << std::endl;

	if (player.iPawnsLeft == 0)
	{
		std::cout << "\t " <<player.sPname << "Lost" << std::endl;
	}

	std::cout << std::endl;
	return player;
}

//========================================================================================================
