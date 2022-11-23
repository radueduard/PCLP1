//
// Created by Eduard Andrei Radu on 10.11.2022.
//

#include <stdio.h>
void bubbleSort ( int *v, int n ) {
    int gata=0, i, aux;
    while (!gata) {
        gata=1;
        for (i=0; i<n-1; i++)
            if (v[i] > v[i+1]) { 
                gata = 0; 
                aux = v[i];
                v[i] = v[i+1];
                v[i+1] = aux;
            }
    }
}

int main()
{
    int v[100];
    int i,n;
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%d", &v[i]);
    }
    bubbleSort(v,n);
    for(i=0;i<n;i++)
       printf("%d", v[i]);

    
    return 0;
}