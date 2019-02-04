//=============HEADERS==================================================================================
#include "pch.h"
#include "Pawn.h"
//======================================================================================================



Pawn::Pawn()
{
					//	R	P	S	O	L	
	int type[5][5] = { {10,  5, 20, 5 , 20},	// R
					   {20, 10,  5, 20,  5},	// P
					   { 5, 20, 10, 5 , 20},	// S
					   {20,  5, 20, 10,  5},	// O
					   { 5, 20,  5, 20, 10}	};	// L

	int iHealth = 100;

}


Pawn::~Pawn()
{
}

//====================================FUNCTIONS=========================================================

void Pawn::displayPawntypes()
{
	std::cout << "Select 5 Pawns of different of same type: " << std::endl;
	std::cout << "1) Rock\t		-	r"<< std::endl;
	std::cout << "2) Paper		-	p"<< std::endl;
	std::cout << "3) Scissors\t	-	s"<< std::endl;
	std::cout << "4) Spock		-	o"<< std::endl;
	std::cout << "5) Lizard		-	l"<< std::endl;
	std::cout << "Enter the type you want to select one at a time." << std::endl;
}

// this function sets the value for pawn and also stores the index to be used later for attack
Pawn Pawn::selectPawn(Pawn pawn)
{
	for (int i = 0; i < 5; i++)
	{
		int j;

	LOOP:std::cout << i + 1 << " Pawn type: ";
		std::cin >> j;

		switch (j)
		{
			case 1: 
				std::cout << "Rock Selected" << std::endl;
				iPtype[i] = 0;
				break;

			case 2:
				std::cout << "Paper Selected" << std::endl;
				iPtype[i] = 1;
				break;

			case 3:
				std::cout << "Scissors Selected" << std::endl;
				iPtype[i] = 2;
				break;

			case 4:
				std::cout << "Spock Selected" << std::endl;
				iPtype[i] = 3;
				break;

			case 5:
				std::cout << "Lizard Selected" << std::endl;
				iPtype[i] = 4;
				break;

			default:
			std::cout << "Incorrect Input, try again" << std::endl;
			goto	LOOP;
		}
		
	}
	return pawn;
}

//======================================================================================================
