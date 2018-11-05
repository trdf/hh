#include <stdio.h>

float suma(int n)
{
    float wynik=0;
//    float j;                    //lepiej niz za kazdym razem inicjalizowac j w petli
    for(int i=1; i<=n; i++)
    {
//        j=i;
        wynik += 3 + 10 /(float)i;      //int>float mozna, na odwrot gorzej
    }

    return wynik;
}

int main(int argc, char *argv[])
{
    printf("%f",suma(argc));

    return 0;
}