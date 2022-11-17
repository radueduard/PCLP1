//
// Created by Eduard Andrei Radu on 10.11.2022.
//


#include <stdio.h>

void transform(int v[], int n, int x)
{
    int st = 0, dr = n - 1, aux;
    while(st < dr)
    {
        while(v[st] < x && st < n)
            st++;
        while(v[dr] >= x && dr >= 0)
            dr--;
        if(st < dr)
        {
            aux = v[st];
            v[st] = v[dr];
            v[dr] = aux;
        }
    }
}
int main ()
{
    int v[100], n, x;
    scanf("%d%d", &n, &x);
    for(int i = 0; i < n; i++)
        scanf("%d", &v[i]);
    transform(v, n, x);
    for(int i = 0; i < n; i++)
        printf("%d ", v[i]);
    printf("\n");
    return 0;
}