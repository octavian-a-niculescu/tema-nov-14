﻿#include "stdafx.h"
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

int nr_prim(int a, int div)
{
	if (div == 1) { return 1; }
	else if (a%div == 0) { return 0; }
	else {
		return nr_prim(a, div - 1);
	}
}

int suma(int a[100], int n, int p)
{
	if (n == 0)
	{
		return p;
	}
	else
	{
		if (nr_prim(a[n], a[n] / 2))
		{
			p += a[n];
			return suma(a, n - 1, p);
		}
		else
		{
			return suma(a, n - 1, p);
		}
	}
}

int main()
{
	int n, a[100];
	int x = 0;
	cin >> n;
	citire(a, n);
	cout << suma(a, n, x);
}
