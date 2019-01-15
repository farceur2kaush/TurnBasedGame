//===================================================== Headers =================================================
#include "pch.h"
#include "pawn.h"

#include <iostream>
#include <chrono>
#include <string>

//================================================================================================================

using namespace std;
using namespace std::chrono;


bool bGamePlay = true;

void ShowMenu()
{
	cout << "Enter:" << endl;
	cout << "1) Start Game" << endl;
	cout << "2) Exit Game" << endl;
	cout << "Choice: ";
}

void beginGamePlay() {}

int main()
{
	int iChoice;
	bool bChoiceCorrect = false;

	cout << "Hello! Welcome to a turn based strategy game." << endl;
	cout << "It is a mix of pokemon and rock, paper and scissors with a twist." << endl;
	cout << "It is Rock, Paper, Scissors, Spock and Lizard \n" << endl;

	cout << "**************************** Instructions ************************\n" << endl;

	cout << "Both the player get to select any five pawn from five categories. " << endl;
	cout << "All the categories have different strengths and weaknesses. \n" << endl;
	cout << "All the pawn start with health = 100 and different pawn has different attack strength" << endl;
	
	cout << "*******************************************************************\n" << endl;
	
	while (bChoiceCorrect = false)
	{
		ShowMenu();
		cin >> iChoice;
	}
	
	switch (iChoice)
	{
		case 0:
			beginGamePlay();
			break;

		case 1:
			bGamePlay = false;
			break;
	}



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
