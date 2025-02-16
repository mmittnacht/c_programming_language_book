#pragma once

#include "stdio.h"

#define IN 1
#define OUT 0
#define MAX_WORD_LENGTH 45

void exc1_13( )
{
    // According to wikipedia,
    // this is the length of the longest word in a major dictionary;
    int wlc[MAX_WORD_LENGTH];
    int c, c_count, state;

    c_count = 0;
    state = OUT;

    for (int i = 0; i < MAX_WORD_LENGTH; ++i)
        wlc[i] = 0;

    while ((c = getchar( )) != EOF)
    {
        if (c >= 'A' && c <= 'z')
        {
            ++c_count;
            state = IN;
        }
        else if (state == IN)
        {
            state = OUT;
            ++wlc[c_count];
            c_count = 0;
        }
    }

    for (int i = 0; i < MAX_WORD_LENGTH; ++i)
    {
        if (wlc[i] != 0)
        {
            printf("%d length: %d\n", i, wlc[i]);
        }
    }
}