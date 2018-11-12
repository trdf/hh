#include <stdio.h>
#include <stdlib.h>

void asd(int a)
{
    if(a == 0) printf(0); else
    {
        asd(a / 2);
        printf("%d", a % 2);
    };

}

int main(int argc, char *argv[])
{
    asd(atoi(argv[1]));

    return 0;
}