//
// Created by Eduard Andrei Radu on 09.11.2022.
//

#include <stdio.h>

int prim(int n)
{
    if(n < 1)
        return 0;
    if(n == 1 || n == 2)
        return 1;
    if(n % 2 == 0)
        return 0;
    for(int i = 3; i * i <= n; i++)
        if(n % i == 0)
            return 0;
    return 1;
}

int main()
{
    long int N;
    scanf("%ld", &N);
    for(long int i = 1; i <= N / 2; i++)
        if(prim(i) && prim(N - i))
            printf("%ld %ld\n", i, N - i);
    return 0;
}
