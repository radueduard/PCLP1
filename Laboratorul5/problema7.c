//
// Created by Eduard Andrei Radu on 09.11.2022.
//

#include <stdio.h>
#include <string.h>

int transforma(int n)
{
    int v[10], ok = 0, nr = 0;
    memset(v, 0, 10 * sizeof(int));
    while(n != 0)
    {
        if(n % 10 == 0)
            ok = 1;
        v[n % 10]++;
        n /= 10;
    }
    if(ok)
        for(int i = 9; i >= 0; i--)
            while(v[i] != 0)
            {
                nr = nr * 10 + i;
                v[i]--;
            }
    else
        for(int i = 0; i <= 9; i++)
            while(v[i] != 0)
            {
                nr = nr * 10 + i;
                v[i]--;
            }
    return nr;
}
int main()
{
    long int N;
    scanf("%ld", &N);
    printf("%d\n", transforma(N));
    return 0;
}
