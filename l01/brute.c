#include <stdio.h>
#define N 100

/*int add(int x, int y)*/

int main() {

    for (int i=2; i<=N; i++)   //sprawdza czy i jest pierwsza
    {
        int j;
        for (j=2; j<i; j++)  //dzieli i przez wszystkie liczby mniejsze od i; sprawdza az do i-1 zamiast do sqrt(i)
        {
            if(i%j==0) break;
        }
        if (j==i) printf("%d\n",i);
    };
//    printf("%d\n",i);


 /*   printf("%d\n", argc);

    printf("%s\n", argv[0]);
    printf("%s", argv[1]);


    int tab[5] = {1, 3, 54, 0, -5};
*/
//    for (int k = 0; k < 7; k++) {
//        printf("%d\n", tab[k]);
//    }

//    int y = 333;
//    printf("%d\n", add(x,y));
//    printf("%d\n", y);
//    printf("%d\n", x);
    return 0;
}
/*

int add(int x, int y){
    x+=5;
    y -= 5;
    return x + y;
}
*/
