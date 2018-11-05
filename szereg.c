#include <stdio.h>

float suma(int n)
{
    float wynik=0;
    for(int i=1; i<=n; i++)
    {
        float j=i;
        wynik += 3 + 10 /j;
    }

    return wynik;
}

int main(int argc, char *argv[])
{
    printf("%f",suma(argc));

    return 0;
}