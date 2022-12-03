//
// Created by Eduard Andrei Radu on 10.11.2022.
//

#include<stdio.h>

void transforma(int v[], int n, int x) {
    int stanga = 0, dreapta = n - 1, aux;
    while (stanga < dreapta) {
        while (v[stanga] < x)
            stanga++;
        while (v[dreapta] > x)
            dreapta--;
        if (v[stanga] > v[dreapta]) {
            aux = v[stanga];
            v[stanga] = v[dreapta];
            v[dreapta] = aux;
        }
    }
}

int main() {
    int size, variabila, vect[100];
    scanf("%d", &size);
    scanf("%d", &variabila);
    for (int i = 0; i < size; i++)
        scanf("%d", &vect[i]);
    transforma(vect, size, variabila);
    for (int i = 0; i < size; i++) {
        printf("%d ", vect[i]);
    }
    return 0;
}