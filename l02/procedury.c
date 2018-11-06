#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void brute(int m)
{
    for (int i=2; i<=m; i++)
    {
        int j;
        for (j = 2; j < i; j++)
        {
            if (i % j == 0) break;
        };
        if (j == i) printf("%d\n", i);
    };
}

void smart(int m)
{
    bool t[m];

    for (int i=2; i<=m; i++)
    {
        for (int j=2; j<=m/i; j++)
        {
            t[j*i]=true;
        };
    };

    for (int i=2; i<m; i++)
        if (t[i]==0) printf("%d\n",i);
}

int main(int argc, char *argv[])
{
    printf("Metoda 'brutalna'.\n");
    brute(atoi(argv[1]));

    printf("Metoda 'sprytna'.\n");
    smart(atoi(argv[1]));

    return 0;
}