#include <stdio.h>
#include <stdlib.h>


typedef struct element{
    int wart;
    struct element *nast;
} el;

void dopisz(el *pocz, int wart)
{
    el *ruch = pocz;
    while (ruch->nast!=NULL)
        ruch=ruch->nast;
    ruch->nast = malloc(sizeof(el));
    ruch->nast->wart=wart;
    printf("Dopisane: %d\n", ruch->nast->wart);

}

void przypisz(el *pocz)
{
    el *ruch = pocz;

    for (int i = 0; i <= 100 && ruch != NULL; i++) {

        ruch->wart = i * i;
        if(i<100){  //bez tego warunku tworzy sie nowa zbedna komorka i przy dopisywaniu bedzie przez nia przeskakiwac...
            ruch->nast = malloc(sizeof(el));
            ruch = ruch->nast;}
    }
//    ruch = NULL; //czemu to nie działa zamiast ifa???
}

void wypisz(el *pocz)
{
    el *ruch = pocz;

    for (int i = 0; ruch != NULL; i++) {
        printf("%d^2 = %d\n", i, ruch->wart);
        ruch = ruch->nast;
    }
}

int main() {

    el *pocz = NULL;
    pocz = malloc(sizeof(el));
    if (pocz == NULL)
        return 1;

    przypisz(pocz);

//        el *ruch=pocz;
//    for (int i = 0; i < 100; i++) {
//        ruch->wart = i * i;
//        ruch->nast = malloc(sizeof(el));
//        ruch=ruch->nast;
//    }
//
    wypisz(pocz);

    dopisz(pocz, 11);

    wypisz(pocz);

    return 0;
}