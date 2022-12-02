//
// Created by Eduard Andrei Radu on 10.11.2022.
//

#include<stdio.h>

void bubble_sort(int *v, int n)
{
    int aux;
    for(int i = 0;i < n - 1; i++)
        for(int j = 0; j < n - i - 1; j++)
            if(v[j] > v[j + 1])
            {
                aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
            }
}
int main()
{
    int v[100], n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
        scanf("%d", &v[i]);
    bubble_sort(v, n);
    for(int i = 0; i < n; i++)
        printf("%d ", v[i]);
    printf("\n");
    return 0;
}
