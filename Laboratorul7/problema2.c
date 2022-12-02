#include <stdio.h>
#include <stdlib.h>

void count(int n, int* v, int* zero, int* poz, int* neg);

int main()
{
    int n, * v, z = 0, p = 0, ne = 0;
    scanf("%d", &n);
    if (n < 0 || n>100)
    {
        printf("Date invalid introduse.");
        return 0;
    }
    v = (int*)malloc(100 * sizeof(int));
    for (int i = 0; i < n; i++)
        scanf("%d", &v[i]);
    count(n, v, &z, &p, &ne);
    printf("nule:%d\npozitive:%d\nnegative:%d\n", z, p, ne);
}

void count(int n, int* v, int* zero, int* poz, int* neg)
{
    for (int i = 0;i < n;i++)
    {
        if (v[i] > 0)
            (*poz)++;
        else
        {
            if (v[i] < 0)
                (*neg)++;
            else
                (*zero)++;
        }
    }
}