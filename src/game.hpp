#ifndef GAME_HPP
#define GAME_HPP

#include <chrono>
#include <thread>
#include "termcolor.hpp"


using namespace std;

void game(string team, int turn, int i, string& ac, string& bc, string& cc, string& ab, string& bb, string& cb, string& aa, string& ba, string& ca)
{
	int xl = 0;
	if (i == 0)
	{
		if (turn % 2 == 1)
		{
			team = "X ";
		}
		else
		{
			team = "O ";
		}
		
		system("cls");
		cout << turn << "  " << team << "'s turn!\n";
		cout << " " << ac << " | " << bc << " | " << cc << "\n";
		cout << "---------------\n";
		cout << " " << ab << " | " << bb << " | " << cb << "\n";
		cout << "---------------\n";
		cout << " " << aa << " | " << ba << " | " << ca << "\n";
		cout << "\n";
		int ii = 0;
		while (ii == 0)
		{
			cout << termcolor::bright_yellow;
			string input;
			cout << "  May " << team << "enter their move! : " << termcolor::white;
			cin >> input;
			if (input == "ac")
			{
				if (ac == "ac")
				{
					ac = team;
					ii++;
					break;
				}
				else
				{
					cout << "  Already tooken!\n";
				}
			}
			else if (input == "bc")
			{
				if (bc == "bc")
				{
					bc = team;
					ii++;
					break;
				}
				else
				{
					cout << "  Already tooken!\n";
				}
			}
			else if (input == "cc")
			{
				if (cc == "cc")
				{
					cc = team;
					ii++;
					break;
				}
				else
				{
					cout << "  Already tooken!\n";
				}
			}
			else if (input == "ab")
			{
				if (ab == "ab")
				{
					ab = team;
					ii++;
					break;
				}
				else
				{
					cout << "  Already tooken!\n";
				}
			}
			else if (input == "bb")
			{
				if (bb == "bb")
				{
					bb = team;
					ii++;
					break;
				}
				else
				{
					cout << "  Already tooken!\n";
				}
			}
			else if (input == "cb")
			{
				if (cb == "cb")
				{
					cb = team;
					ii++;
					break;
				}
				else
				{
					cout << "  Already tooken!\n";
				}
			}
			else if (input == "aa")
			{
				if (aa == "aa")
				{
					aa = team;
					ii++;
					break;
				}
				else
				{
					cout << "  Already tooken!\n";
				}
			}
			else if (input == "ba")
			{
				if (ba == "ba")
				{
					ba = team;
					ii++;
					break;
				}
				else
				{
					cout << "  Already tooken!\n";
				}
			}
			else if (input == "ca")
			{
				if (ca == "ca")
				{
					ca = team;
					ii++;
					break;
				}
				else
				{
					cout << "  Already tooken!\n";
				}
			}
			else
			{
				cout << "  Invalid input\n";
			}
		}
	}
	else if (i == 2)
	{
		cout << " X Wins!\n";
	}
	else if (i == 3)
	{
		cout << " O Wins!\n";
	}
	else 
	{
		cout << " Status Error\n";
	}
}


#endif
