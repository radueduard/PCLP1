//
// Created by Eduard Andrei Radu on 10.11.2022.
//

#include<stdio.h>

void sort(int a[], int n) {
    int i, j, aux;
    for (i = 0; i < n - 1; i++)
    for (j = i + 1; j < n; j++) {
        if(a[j] < a[i]) {
            aux = a[i];
            a[i] = a[j];
            a[j] = aux;
        }
    }
}
int main() {
    int a[100], n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    sort(a, n);
    for (i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    return 0;
}