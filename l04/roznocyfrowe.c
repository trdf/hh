#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int licz2,licz3;  //liczniki

    for (int i = 2; i <= 16; i++)
    {


        int liczba_raz = atoi(argv[1]), liczba_dwa = atoi(argv[2]);
        int liczba_raz_dlug = log(liczba_raz) / log(i); //liczba cyfr liczby 'argv[1]' w danym poz. systemie liczb. - 1
        int liczba_dwa_dlug = log(liczba_dwa) / log(i); //liczba cyfr liczby 'argv[2]' w danym poz. systemie liczb. - 1
        char liczba_raz_konw[liczba_raz_dlug+1];
        char liczba_dwa_konw[liczba_dwa_dlug+1];

        /*Teraz przeksztalcam 'argv[1]' z systemu dzies. na syst. o podst. 'i':*/
        for (licz2=0; licz2 <=liczba_raz_dlug && liczba_raz!=0; licz2++) {
            liczba_raz_konw[licz2] = liczba_raz / pow(i, liczba_raz_dlug-licz2);
            liczba_raz -= liczba_raz_konw[licz2] * pow(i, liczba_raz_dlug-licz2);
        }

       /*W tym mscu mam 'argv[1]' przepisane na system o podst. 'i'.
         Teraz musze go porownac z kolejnymi cyframi przeksztalconego 'argv[2]'.
         Robie druga taka petle:*/
        for (licz2=0; licz2 <=liczba_dwa_dlug && liczba_dwa>=0; licz2++) {    //liczba_dwa>=0, a nie liczba_dwa>0!
            liczba_dwa_konw[licz2] = liczba_dwa / pow(i, liczba_dwa_dlug-licz2);
            for (licz3=0;licz3<=liczba_raz_dlug && liczba_dwa!= -1;licz3++) //teraz sprawdzam ta cyfre 'liczba_dwa_konw' ze wsz. po kolei cyframi 'liczba_raz_konw'
            {
                if (liczba_dwa_konw[licz2]==liczba_raz_konw[licz3]) liczba_dwa=-1; //liczba_dwa = -1 -> zaznaczam ze 'liczba_raz_konw' i 'liczba_dwa_konw' NIE sa roznocyfrowe w danym systemie liczb.
            }
            liczba_dwa -= liczba_dwa_konw[licz2] * pow(i, liczba_dwa_dlug-licz2);  //tu mi jeszcze pomniejsza 'liczba_dwa', dlatego nizej w 'ifie' jest liczba_dwa>=0, bo nie zawsze bedzie liczba_dwa=-1!
        }

        if (liczba_dwa >= 0) {   //czyli jesli SA roznocyfrowe w danym systemie
            printf("%d", i);
            break;
        }    //jesli NIE sa roznocyfrowe - przechodze do nastepnego systemu


    }

    return 0;

    /*for (int licz4=0;licz4<=licz3;licz4++)
        printf("%d ", aa[licz4]);
    printf("\n");   //wypisuje 'argv[1]' w tych wszystkich systemach */

    // Mozna spokojnie zdjac ograniczenie i<=16, najpozniej dla 'i' rownego wiekszej z liczb petla sie skonczy (czyli zwykla petla 'while')
}