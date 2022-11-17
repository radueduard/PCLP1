//
// Created by Eduard Andrei Radu on 10.11.2022.
//

#include <stdio.h>

void Bubblesort(int v[], int n){
    int i, j;
    for(i = 0; i < n - 1; i++)
        for(j = i + 1; j < n; j++)
            if(v[i] > v[j]){
               int aux = v[i];
               v[i] = v[j];
               v[j] = aux;
            }
}

int main(){
    int n, v[100], i;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
        scanf("%d", &v[i]);
    Bubblesort(v, n);
    for(i = 0; i < n; i++)
        printf("%d ", v[i]);
    return 0;
}