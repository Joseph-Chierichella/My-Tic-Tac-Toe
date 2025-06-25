#ifndef CELEBRATION_HPP
#define CELEBRATION_HPP

#include "termcolor.hpp"
#include <thread>
#include <chrono>

void xwins()
{
	system("cls");
	cout << "\n";
	cout << "\n";
	cout << termcolor::cyan;
	cout << "     X WINS!";
	cout << termcolor::reset;
	this_thread::sleep_for(chrono::milliseconds(2000));
	system("cls");
	
}

void owins()
{
	system("cls");
	cout << "\n";
	cout << "\n";
	cout << termcolor::cyan;
	cout << "     O WINS!";
	cout << termcolor::reset;
	this_thread::sleep_for(chrono::milliseconds(2000));
	system("cls");
}

#endif
