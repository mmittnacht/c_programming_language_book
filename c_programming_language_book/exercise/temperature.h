#pragma once

#include "stdio.h"

void exc1_4( )
{
    int lower = 0;
    int upper = 300;
    int step = 20;
    float cels = lower , fahr;

    while (cels < upper)
    {
        fahr = cels * (9.0 / 5.0) + 32.0;

        printf("%3.0f\t%6.1f\n", cels, fahr);

        cels += step;
    }
}

void exc1_5( )
{
    for (int fahr = 300; fahr > 0; fahr -= 20)
    {
        printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
    }
}