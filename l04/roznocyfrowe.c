#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

//bool por(string a, string b)    //funkcja porownuje cyfry liczb 'a' i 'b' przy danej podstawie pozycyjnego systemu liczbowego 'i'
//{
//
//}

//string zs(int l, int i)   //funkcja zwraca postac liczby 'l' w pozycyjnym systemie liczbowym o danej podstawie 'i'
//{
//    int j = 1 + log(l) / log(i); //liczba cyfr liczby 'l' w danym poz. systemie liczb.
//    char ll[j];
//    for (j; j >= 0; --j)
//    {
//    }
//
//}

int main(int argc, char *argv[])
{

    for (int i = 2; i <= 16; i++) {




        int a = atoi(argv[1]), b = atoi(argv[2]);

        //teraz przeksztalcam 'a' z systemu dzies. na syst. o podst. 'i':
        int la = log(a) / log(i); //liczba cyfr liczby 'a' w danym poz. systemie liczb. - 1
        char aa[la+1];
        for (int k=0; k <=la && a!=0; k++) {
            aa[k] = a / pow(i, la-k);
            a -= aa[k] * pow(i, la-k);
        }   //w tym mscu mam 'argv[1]' przepisane na system o podst. 'i'. Teraz musze go porownac z kolejnymi cyframi 'argv[2]'. Robie druga taka petle:

        int lb = log(b) / log(i); //liczba cyfr liczby 'a' w danym poz. systemie liczb. - 1
        char bb[lb+1];
        for (int k=0; k <=lb && b!=0; k++) {
            bb[k] = b / pow(i, lb-k);
            for (int l=0;l<=la;l++) //teraz sprawdzam ta cyfre 'bb' ze wsz. po kolei cyframi 'aa'
            {
                if
            }
            b -= bb[k] * pow(i, lb-k);
        }


        /*for (int z=0;z<=l;z++) //wypisuje 'argv[1]' w tych wszystkich systemach
            printf("%d ", aa[z]);
        printf("\n");*/


    }



    return 0;
}