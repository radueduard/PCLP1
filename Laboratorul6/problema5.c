//
// Created by Eduard Andrei Radu on 10.11.2022.
//

#include<stdio.h>

void interschimbare(int * p, int * m)
{
    int aux;
    aux = * p;
    * p = * m;
    * m = aux;
}

void transform(int v[], int n, int x)
{
    int start = 0;
    int end = n - 1;
    while(start < end)
    {
        if(v[start] >= x)
        {
            while(v[end] >= x)
                end --;
            interschimbare(&v[start], &v[end]);
            start ++;
        }
        else start ++;
    }
}
int main()
{
    int n, x, v[100];
    scanf("%d%d", &n, &x);
    for(int i = 0; i < n; i++)
        scanf("%d", &v[i]);

    transform(v, n, x);
    for(int i = 0; i < n; i++)
        printf("%d ", v[i]);
    printf("\n");
    return 0;
}