#ifndef CHECK_HPP
#define CHECK_HPP

using namespace std;

void check(int& i,string ac,string bc,string cc,string ab,string bb,string cb,string aa,string ba,string ca)
{
	if (ac == "X ")
	{
		if (bc == "X ")
		{
			if (cc == "X ")
			{
				i = 2;
			}
		}
		else if (ab == "X ")
		{
			if (aa == "X ")
			{
				i = 2;
			}
			if (bb == "X ")
			{
				if (cb == "X ")
				{
					i = 2;
				}
			}
		}
	}
	if (ab == "X ")
	{
		if (bb == "X ")
		{
			if (cb == "X ")
			{
				i = 2;
			}
		}
	}
	if (aa == "X ")
	{
		if (ba == "X ")
		{
			if (ca == "X ")
			{
				i = 2;
			}
		}
	}
	if (bc == "X ")
	{
		if (bb == "X ")
		{
			if (ba == "X ")
			{
				i = 2;
			}
		}
	}
	if (cc == "X ")
	{
		if (cb == "X ")
		{
			if (ca == "X ")
			{
				i = 2;
			}
		}
	}
	if (bb == "X ")
	{
		if (ac == "X ")
		{
			if (ca == "X ")
			{
				i = 2;
			}
		}
		if (aa == "X ")
		{
			if (cc == "X ")
			{
				i = 2;
			}
		}
	}
	if (ac == "O ")
	{
		if (bc == "O ")
		{
			if (cc == "O ")
			{
			i = 3;
			}
		}
		else if (ab == "O ")
		{
			if (aa == "O ")
			{
				i = 3;
			}
			if (bb == "O ")
			{
				if (cb == "O ")
				{
					i = 3;
				}
			}
		}
	}
	if (ab == "O ")
	{
		if (bb == "O ")
		{
			if (cb == "O ")
			{
				i = 3;
			}
		}
	}
	if (aa == "O ")
	{
		if (ba == "O ")
		{
			if (ca == "O ")
			{
				i = 3;
			}
		}
	}
	if (bc == "O ")
	{
		if (bb == "O ")
		{
			if (ba == "O ")
			{
				i = 3;
			}
		}
	}
	if (cc == "O ")
	{
		if (cb == "O ")
		{
			if (ca == "O ")
			{
				i = 3;
			}
		}
	}
	if (bb == "O ")
	{
		if (ac == "O ")
		{
			if (ca == "O ")
			{
				i = 3;
			}
		}
		if (aa == "O ")
		{
			if (cc == "O ")
			{
				i = 3;
			}
		}
	}

}


#endif
