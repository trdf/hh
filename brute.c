#include <stdio.h>
#define N 100

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
    return 0;
}