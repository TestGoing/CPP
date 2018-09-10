//Craps simulation

#include <iostream>
#include <cstdlib> //contains prototypes for functions srand and rand
#include <ctime> //contains prototype for function time

using namespace std;

unsigned int rollDice(); //rolls dice, calculates and displays sum

int main()
{
	// enumeration with contants that represent the game status
	enum class Status:unsigned int {CONTINUE, WON, LOST}; //all caps in constants

	//randomize random number generator using current time
	srand( static_cast<unsigned int>( time( 0 ) ) );

	unsigned int myPoint = 0; //point if no win or loss on first roll
	Status gameStatus = Status::CONTINUE; // can contain CONTINUE, WON or LOST
	unsigned int sumOfDice = rollDice(); //first roll of the dice
	switch( sumOfDice )
	{
		case 7:	//win with 7 on first roll
		case 11: //win with 11 on first roll
			gameStatus = Status::WON;
			break;
		case 2: //lose with 2 on first roll
		case 3: //lose with 3 on first roll
		case 12: //lose with 12 on first roll
			gameStatus = Status::LOST;
			break;
		default:
			gameStatus = Status::CONTINUE;
			myPoint = sumOfDice;
			cout << "Point is " << myPoint << endl;
			break;
	} // end switch

	while( Status::CONTINUE == gameStatus )
	{
		sumOfDice = rollDice();
		if( sumOfDice == myPoint )
			gameStatus = Status::WON;
		else if( sumOfDice == 7 )
			gameStatus = Status::LOST;
	}

	if( Status::WON == gameStatus )
		cout << "Player wins" << endl;
	else
		cout << "Player loses" << endl;
}

unsigned int rollDice()
{
	unsigned int die1 = 1 + rand() % 6;
	unsigned int die2 = 1 + rand() % 6;

	unsigned int sum = die1 + die2;

	cout << "Player rolled " << die1 << " + " << die2
	     << " = " << sum << endl;
	return sum;
}