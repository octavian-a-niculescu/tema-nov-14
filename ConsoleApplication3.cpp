#include "stdafx.h"
#include <iostream>

using namespace std;

void citire(int a[100], int n)
{
	if (n == 1)
	{
		cin >> a[n];
	}
	else
	{
		cin >> a[n];
		citire(a, n - 1);
	}
}

int egalitate(int a[100], int n)
{
	if (n == 1)
	{
		return 1;
	}
	else
	{
		if (a[n] == a[n - 1])
		{
			return 1 + egalitate(a, n - 1);
		}
		else
		{
			return egalitate(a, n - 1);
		}
	}
}

int main()
{
	int n, a[100];
	int x = 0;
	cin >> n;
	citire(a, n);
	if (n == egalitate(a, n))
	{
		cout << "da";
	}
	else
	{
		cout << "nu";
	}
}