// KingdomFluxTextBased.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	char a = 0;
	while (a != '\n')
	{
		cin >> a;
		printf("%c\n", a);
	}
    return 0;
}