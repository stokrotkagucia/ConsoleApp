// ConsoleApp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <Windows.h>

int main()
{
	// this is git initial checking
	// new comment second commit
	//second change made in BrNewFeature
	OutputDebugStringA("OutputDebugStringA");
	OutputDebugStringW(L"OutputDebugStringW");
	printf ("Hello there") ;
	OutputDebugString(L"exiting");
	//change made in master branch 1
	//change made in master branch 2
	//first change in branch BrNewFeature
	//change made in master branch 3 after merging BrNewFeature
	return 0;
}

