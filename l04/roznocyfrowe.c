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
    int a = atoi(argv[1]), b = atoi(argv[2]);

    for (int i = 2; i <= 16; i++) {
        int l = 1 + log(a) / log(i); //liczba cyfr liczby 'a' w danym poz. systemie liczb.

        //teraz przeksztalcam 'a' z systemu dzies. na syst. o podst. 'i':
        char aa[l];
        for (l; l >= 0; --l) {
            aa[l] =a / pow(i, l);
        }
//        printf("%s", aa);

    }



    return 0;
}