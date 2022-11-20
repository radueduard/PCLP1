//
// Created by Eduard Andrei Radu on 10.11.2022.
//

#include <stdio.h>

void transform(int v[], int n, int x) {
    int stanga = 0, dreapta = n - 1, aux;
    while(stanga < dreapta) {
        if(v[stanga] >= x) {
            while(v[dreapta] >= x)
                dreapta--;
            aux = v[stanga];
            v[stanga] = v[dreapta];
            v[dreapta] = aux;
        }
        stanga++;
    }
}

int main()
{
    int v[100], n, x;
    scanf("%d%d", &n, &x);
    for (int i = 0; i < n; i++)
        scanf("%d", &v[i]);
    transform(v, n, x);
    for (int i = 0; i < n; i++)
        printf("%d ",  v[i]);
    printf("\n");
    return 0;
}