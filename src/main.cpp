

#include <iostream>
#include <string>
#include <cstdlib>
#include <thread>
#include <chrono>
#include "termcolor.hpp"

#include "StartMessage.hpp"
#include "game.hpp"
#include "check.hpp"
#include "celebration.hpp"

// status = 0 ~~ Program will continue
// status = 1 ~~ Error, program will emergency shut down
// status = 2 ~~ X   wins
// status = 3 ~~ O   wins
// status = 4 ~~ tie
//
//
//     A   B   C
//  __________________  x
// C |ac   bc  cc                (xy)
// B |ab   bb  cb
// A |aa   ba  ca
//   y

int main()
{
	int status;
	status = 0;
	starting(status);
	system("cls");
	string ac = "ac";
	string bc = "bc";
	string cc = "cc";
	string ab = "ab";
	string bb = "bb";
	string cb = "cb";
	string aa = "aa";
	string ba = "ba";
	string ca = "ca";
	
	int turn = 0;
	std::string team;
	
	while (status == 0)
	{
		turn++;
		if (turn == 10)
		{
			tie();
			status = 4;
			break;
		}
		game(team,turn,status,ac,bc,cc,ab,bb,cb,aa,ba,ca);
		check(status,ac,bc,cc,ab,bb,cb,aa,ba,ca);
		if (status != 0)
		{
			if (status == 2)
			{
				xwins();
				break;
			}
			else if (status == 3)
			{
				owins();
				break;
			}
		}
		cout << termcolor::reset;
	}
	
	return 0;
}
