#include <stdio.h>

int  main()
{
    short m=0;
    printf("%d", sizeof(m));

    for(int i=0; i<=100000; i++)
    {
        printf("\n%d", m++);
    }

    return 0;
}

/*
short ma 2 bajty = 2*8 bitow = 16 bitow
2^15=32768 (^15 bo jest jeszcze pozycja 'zerowa', 2^0=1)
*/
