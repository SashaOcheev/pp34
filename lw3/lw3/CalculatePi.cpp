#include "stdafx.h"
#include <stdlib.h>
#include <math.h>
#include "CalculatePi.h"

double CalculatePi(int iterationCount)
{
    double x, y;
    int i, count = 0;
    double z;
    double pi;

    /* initialize random numbers */
    count = 0;
    for (i = 0; i < iterationCount; i++)
    {
        x = (double)rand() / RAND_MAX;
        y = (double)rand() / RAND_MAX;
        z = x * x + y * y;
        if (z <= 1)
        {
            count++;
        }
    }
    pi = (double)count / iterationCount * 4;

    return pi;
}