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
Player Player::inputPdata(Player player)
{
	return Player();
}
//====================================FUNCTIONS=========================================================


Player Player::inputPdata(Player player)
{
	cout << "\t Enter Player Name				:	";
	cin >> player.sPname;
	cout << endl;

}

Player Player::displayPdata(Player player)
{
	cout << endl;
	cout << "Players Attribute	: " << endl;
	cout << "\t Name			:	" << player.sPname << endl;
	cout << "\t Pawns Left		:	" << player.iPawnsLeft << endl;

	if (player.iPawnsLeft == 0)
	{
		cout << "\t " <<player.sPname << "Lost" << endl;;
	}

	cout << endl;
	return player;
}

//========================================================================================================
