//
// Created by Eduard Andrei Radu on 10.11.2022.
//

#include <stdio.h>

void bubble(int v[], int n);

int main()
{
    int v[100], n;
    scanf("%d", &n);
    if (n <= 0 || n >= 10000)
    {
        printf("Date invalid introduse.\n");
        return 0;
    }
    for (int i = 0;i < n;i++)
        scanf("%d", &v[i]);
    bubble(v, n);
    for (int i = 0;i < n;i++)
        printf("%d ", v[i]);
    printf("\n");
}

void bubble(int v[], int n)
{
    int aux = 0;
    for (int i = 0;i < n - 1;i++)
    {
        for (int j = 0;j < n - 1 - i;j++)
        {
            if (v[j] > v[j + 1])
            {
                aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
            }
        }
    }
}