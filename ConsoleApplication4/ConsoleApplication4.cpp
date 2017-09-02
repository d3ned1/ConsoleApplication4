// ConsoleApplication4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "myheader.h"

int main()
{
	int step = 20;
	int m = step;
	for (int j = 1; j <= step; j++)
	{
		int n = j;
		cout  << setw(m);
		do
		{
				cout << "X";
				n--;
		} while (n > 0);
		
		cout << endl;
		m--;
	}
return 0;
}

