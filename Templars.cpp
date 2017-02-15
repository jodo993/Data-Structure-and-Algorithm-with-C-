// Templars.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include "Gift.h"
#include "XBoxGame.h"
#include "WorldPeace.h"

// Main of the program
int main()
{
	Gift <XBoxGame> present;
	Gift <WorldPeace> imaginary;
	present.Shake();
    return 0;
}

