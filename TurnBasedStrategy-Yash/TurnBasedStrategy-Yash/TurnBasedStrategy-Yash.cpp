// GAME300-LAB1-Yash_Kaushik

//===================================================== Headers =================================================
#include "pch.h"
#include "Pawn.h"
#include "Player.h"

#include <iostream>
#include <iomanip>
#include <chrono>
#include <string>
#include <chrono>
#include <thread>
//================================================================================================================

using namespace std::chrono;
using namespace std::this_thread;		// sleep_for, sleep_until
using namespace std::chrono_literals;	// ns, us, ms, s, h, etc.
using std::chrono::system_clock;

bool bGamePlay = true;
void beginGamePlay();

void ShowMainMenu()
{
	char a;
	std::cout << std::endl <<"Enter:"	<< std::endl;
	std::cout << "\t1) Start Game"		<< std::endl;
	std::cout << "\t2) Instructions"		<< std::endl;
	std::cout << "\t3) Exit Game"			<< std::endl;
	
LOOP:	std::cout << "Choice 1 or 2: ";
	std::cin >> a;
	if (a == '1')
	{
		char ch = 'y';
		while (ch != 'n')
		{
			beginGamePlay();
		}
	}
	else if (a == '2')
	{

	}
	else if (a == '3')
	{
		std::cout << "BYE!"<<std::endl;
		sleep_until(system_clock::now() + 2s);		// 2 seconds delay
		std::_Exit;
	}
	else
	{
		std::cout << "Wrong Input, Try Again" << std::endl;
		goto LOOP;
	}
		
}


int main()
{
	std::cout << "************************************************************************\n"	<< std::endl;

	std::cout << "Hello! Welcome to a turn based strategy game."								<< std::endl << std::endl;
	std::cout << "It is a mix of Pokemon and Rock, Paper and Scissors with a twist."			<< std::endl;
	std::cout << "It is Rock, Paper, Scissors, Spock and Lizard \n"								<< std::endl;

	std::cout << "**************************** INSTRUCTIONS ******************************\n"	<< std::endl;

	std::cout << "Both the players get to select any five pawns from five categories. "			<< std::endl;
	std::cout << "All the categories have different strengths and weaknesses."					<< std::endl << std::endl;
	std::cout << "All the pawn start with health = 100 "										<< std::endl;
	std::cout << "Different pawn has different attack strength"									<< std::endl << std::endl;
	
	std::cout << "************************************************************************\n"	<< std::endl;

	system("PAUSE");
	system("CLS");

	// clear screen and bring to the Main Menu
	ShowMainMenu();
	

	
	system("PAUSE");
	return 0;
}

void beginGamePlay() 
{
	Player	player[2];
	Pawn	pawn[5];

	for (int i = 0; i < 2; i++)
	{
		player[i].inputPdata(player[i]);
		pawn->displayPawntypes();

		for (int j = 0; j < 5; j++)
		{
			pawn[j].selectPawn(pawn[j]);
		}
		
	}
	
	std::cout << "****************INPUT STARTS HERE**************************" << std::endl;
	player[1] = player[1].inputPdata(player[1]);
}


//================================================================================================================
