#include <stdio.h>
#include <stdbool.h>

void brute(int m)
{
    for (int i=2; i<=m; i++)   //sprawdza czy i jest pierwsza
    {
        int j;
        for (j = 2; j < i; j++)  //dzieli i przez wszystkie liczby mniejsze od i; sprawdza az do i-1 zamiast do sqrt(i)
        {
            if (i % j == 0) break;
        };
        if (j == i) printf("\n%d", i);
    };
}

void smart(int m)
{
    bool t[m];

    for (int i=2; i<=m; i++) //'i' - dzielnik, ktorego wielokrotnosci zaznacza nastepna petla
    {
        for (int j=2; j<=m/i; j++)   // j<=N/i bo np dla i=3 i j=33 warunek 33<100/3 nie jest spelniony i linijka 13 nie wykona sie
        {
            t[j*i]=true;   //i*j - liczba zlozona, zaznaczyc ja
        };
    };

    for (int i=2; i<m; i++)     //i<N bo t[100] nie istnieje
        if (t[i]==0) printf("\n%d",i);      //nie &i w nawiasie po printf!
}

int main(int argc, char *argv[])
{
    printf("Metoda 'brutalna'.\n");
    brute(argc);

    printf("\nMetoda 'sprytna'.\n");
    smart(argc);

    return 0;
}