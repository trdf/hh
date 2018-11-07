#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int m = atoi(argv[1]);
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

    return 0;
}