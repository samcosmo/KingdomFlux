// KingdomFluxTextBased.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv)
{
	string mystr;

	getline(cin, mystr);

	printf("%s\n", mystr.c_str());
    return 0;
}