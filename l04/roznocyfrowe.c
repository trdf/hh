#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int k,l;  //liczniki

    for (int i = 2; i <= 16; i++)
    {


        int a = atoi(argv[1]), b = atoi(argv[2]);
        int la = log(a) / log(i); //liczba cyfr liczby 'argv[1]' w danym poz. systemie liczb. - 1
        int lb = log(b) / log(i); //liczba cyfr liczby 'argv[2]' w danym poz. systemie liczb. - 1
        char aa[la+1];
        char bb[lb+1];

        /*Teraz przeksztalcam 'argv[1]' z systemu dzies. na syst. o podst. 'i':*/
        for (k=0; k <=la && a!=0; k++) {
            aa[k] = a / pow(i, la-k);
            a -= aa[k] * pow(i, la-k);
        }

       /*W tym mscu mam 'argv[1]' przepisane na system o podst. 'i'.
         Teraz musze go porownac z kolejnymi cyframi przeksztalconego 'argv[2]'.
         Robie druga taka petle:*/
        for (k=0; k <=lb && b>=0; k++) {    //b>=0, a nie b>0!
            bb[k] = b / pow(i, lb-k);
            for (l=0;l<=la && b!= -1;l++) //teraz sprawdzam ta cyfre 'bb' ze wsz. po kolei cyframi 'aa'
            {
                if (bb[k]==aa[l]) b=-1; //b = -1 -> zaznaczam ze 'aa' i 'bb' NIE sa roznocyfrowe w danym systemie liczb.
            }
            b -= bb[k] * pow(i, lb-k);  //tu mi jeszcze pomniejsza 'b', dlatego nizej w 'ifie' jest b>=0, bo nie zawsze bedzie b=-1!
        }

        if (b >= 0) {   //czyli jesli SA roznocyfrowe w danym systemie
            printf("%d", i);
            break;
        }    //jesli NIE sa roznocyfrowe - przechodze do nastepnego systemu


    }

    return 0;

    /*for (int z=0;z<=l;z++)
        printf("%d ", aa[z]);
    printf("\n");   //wypisuje 'argv[1]' w tych wszystkich systemach */

    // Mozna spokojnie zdjac ograniczenie i<=16, najpozniej dla 'i' rownego wiekszej z liczb petla sie skonczy (czyli zwykla petla 'while')
}