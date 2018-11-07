#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    if(strlen(argv[1])%2==0)
    {
        if( strcmp( strcat( argv[1], argv[2] ), argv[3] ) == 0 )
            printf("PRAWDA");
    } else printf("FALSZ");

    return 0;
}