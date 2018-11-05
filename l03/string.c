#include <stdio.h>



int main()
{
    char gr1[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
    char gr2[6] = {'H', 'a', 'l', 'l', 'o', '\0'};


    printf("%s", strcat(gr1, gr2));

    return 0;
}