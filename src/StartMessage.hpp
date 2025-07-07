#ifndef STARTMESSAGE_HPP
#define STARTMESSAGE_HPP

#include <chrono>
#include <thread>

void starting(int i)
{
	using namespace std;
	cout << termcolor::bright_yellow;
	if (i == 0)
	{
		cout << "Starting the program\n";
		this_thread::sleep_for(chrono::milliseconds(1000));
	}
	else
	{
		cout << "Status Error\n";
		this_thread::sleep_for(chrono::milliseconds(1000));
	}
	cout << termcolor::reset;
}


#endif
