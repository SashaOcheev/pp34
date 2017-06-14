// lw3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "CalculatePi.h"
#define SEED 35791246

using namespace std;

int GetHelp(int argc, char* argv[]);

int main(int argc, char* argv[])
{
    if (GetHelp(argc, argv))
    {
        return 1;
    }

    srand(SEED);
    int processCount = strtol(argv[1], nullptr, 10);
    int iterationCount = strtol(argv[2], nullptr, 10);

    cout << CalculatePi(iterationCount) << endl;

    return 0;
}

int GetHelp(int argc, char* argv[])
{
    if (argc == 2 && !strcmp(argv[1], "?") || argc != 3)
    {
        cout << "Enter <process_count> <iteration_count>" << endl;
        return 1;
    }

    return 0;
}