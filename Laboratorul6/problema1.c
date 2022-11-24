
#include<stdio.h>

void sortare(int * p, int n) {
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
            if (p[j] > p[j + 1])
            {
                int aux = p[j];
                p[j] = p[j + 1];
                p[j + 1] = aux;
            }
    }
}

int main() {
    int n, v[10000];
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
        scanf("%d", &v[i]);
    sortare(v, n);
    for(int i = 0; i < n; i++)
        printf("%d ", v[i]);
    printf("\n");
    return 0;
}