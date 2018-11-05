#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tab[10]={0,1,2,3,4,5,6,7,8,9};
    int *wsk;
    wsk=&tab;

    wsk+=4;
    printf("%d\n",wsk[0]);
    printf("%d\n\n",tab[5]);

    *wsk=0;
    printf("%d\n",wsk[0]);
    printf("%d\n\n",wsk[5]);

    for (int i = 0; i < 10; i++) {
        printf("%d\n",wsk[i]);
    }

    printf("\n");
    for (int i = 0; i < 10; i++) {
        printf("%d\n",tab[i]);
    }



    /////////////////////////

    printf("\n");
    printf("\n");

    char gr1[6] = {'H', 'e', 'l', 'l', 'o', '\0'};


    char *asd=NULL;
//    printf(asd);

    asd=malloc(6*sizeof(char));

//    printf("%s",asd);

    strcpy(asd, gr1);

    printf("%s",asd);


}