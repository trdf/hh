#include <stdio.h>
#include <stdbool.h>
#define N 100

int main() {

    bool t[N];

    for (int i=2; i<=N; i++) //'i' - dzielnik, ktorego wielokrotnosci zaznacza nastepna petla
    {
        for (int j=2; j<=N/i; j++)   // j<=N/i bo np dla i=3 i j=33 warunek 33<100/3 nie jest spelniony i linijka 13 nie wykona sie
        {
            t[j*i]=true;   //i*j - liczba zlozona, zaznaczyc ja
        };
    };

    for (int i=2; i<N; i++)     //i<N bo t[100] nie istnieje
        if (t[i]==0) printf("%d\n",i);      //nie &i w nawiasie po printf!

    return 0;
}

//w przeciwienstwie do 'brute', tutaj wypisuje liczby MNIEJSZE od N, bo tu jest tablica, przy tablicy o rozm N nie ma elementu t[N]