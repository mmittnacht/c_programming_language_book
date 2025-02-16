#pragma once

#include "stdio.h"

void exc1_8( )
{
    int counter = 0;
    int c;

    while ((c = getchar( )) != EOF)
    {
        if (c == ' ' || c == '\t' || c == '\n')
            ++counter;
    }

    printf("Blanks + Tabs + NewLines = %d", counter);
}

void exc1_9( )
{
    int c;
    int blank_c = 0;

    while ((c = getchar( )) != EOF)
    {
        if (c == ' ') ++blank_c;
        else blank_c = 0;

        if (blank_c > 1) continue;
        else printf("%c", c);
    }
}

void exc1_10( )
{
    int c;

    while((c = getchar( )) != EOF)
    {
        switch (c)
        {
            case '\n':
                printf("%s", "\\n");
                break;
            case '\t':
                printf("%s", "\\t");
                break;
            case '\\':
                printf("%s", "\\");
                break;
            default:
                printf("%c", c);
                break;
        }
    }
}