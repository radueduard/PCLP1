//
// Created by Eduard Andrei Radu on 09.11.2022.
//
#include <stdio.h>

int cifra(long int n, int c)
{
    if(n == 0 && c == 0) return 1;
    else if(n < 0) n = n * (-1);

    while(n)
    {
        if(n % 10 == c) return 1;
        n = n / 10;
    }
    return 0;
}

long int transforma(long int n)
{
    int v[10];
    long int nr = 0;
    for(int i = 0; i < 10; i++)
        v[i] = 0;
    long int nn = n;
    while(nn)
    {
        v[nn % 10]++;
        nn = nn / 10;
    }
    if(cifra(n, 0) == 0)
    {
        for(int i = 1; i <= 9; i++)
        {
            while(v[i])
            {
                nr = nr * 10 + i;
                v[i] --;
            }
        }
    }
    else
    {
        for(int i = 9; i >= 0; i--)
        {
            while(v[i])
            {
                nr = nr * 10 + i;
                v[i] --;
            }
        }
    }
    return nr;
}

int main()
{
    long int n;
    scanf("%ld", &n);
    printf("%ld\n", transforma(n));
    return 0;
}