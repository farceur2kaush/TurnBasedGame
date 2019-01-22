//===================================================== Headers =================================================
#include "pch.h"
#include "pawn.h"
#include "Player.h"

#include <iostream>
#include <chrono>
#include <string>

//================================================================================================================

using namespace std;
using namespace std::chrono;


bool bGamePlay = true;

//void ShowMenu()
//{
//	cout << endl <<"Enter:" << endl;
//	cout << "1) Start Game" << endl;
//	cout << "2) Exit Game" << endl;
//	cout << "Choice: ";
//}

void beginGamePlay();

int main()
{
	//int iChoice;
	//bool bChoiceCorrect = false;


	cout << "************************************************************************\n" << endl;

	cout << "Hello! Welcome to a turn based strategy game." << endl << endl;
	cout << "It is a mix of pokemon and rock, paper and scissors with a twist." << endl;
	cout << "It is Rock, Paper, Scissors, Spock and Lizard \n" << endl;

	cout << "**************************** INSTRUCTIONS ******************************\n" << endl;

	cout << "Both the players get to select any five pawns from five categories. " << endl;
	cout << "All the categories have different strengths and weaknesses." << endl << endl;
	cout << "All the pawn start with health = 100 " << endl;
	cout << "Different pawn has different attack strength" << endl << endl;
	
	cout << "************************************************************************\n" << endl;
	
	//while (bChoiceCorrect != true)
	//{
	//	ShowMenu();
	//	cin >> iChoice;
	//}
	//
	//switch (iChoice)
	//{
	//	case '1':
	//		beginGamePlay();
	//		break;

	//	case '2':
	//		break;
	//}

	Player player[2];

	system("PAUSE");
	return 0;
}

void beginGamePlay() 
{
	while (bGamePlay = true)
	{

	}
}


void GetPlayerData()
{

}

//================================================================================================================
