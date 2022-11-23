//
// Created by Eduard Andrei Radu on 10.11.2022.
//

#include <stdio.h>
void sortare(int *v,int n){
    int gata=0,aux,i;
    while(gata==0){
        gata=1;
        for(i=0;i<n-1;i++)
            if(v[i] > v[i+1]){
                gata=0;
                aux = v[i];
                v[i] = v[i+1];
                v[i+1] = aux;
            }
    }
}
int main()
{
    
    int n,v[10000],i;
    scanf("%d", &n);
    for(i=0;i<n;i++)
        scanf("%d", &v[i]);

    sortare(v,n);

    for(i=0;i<n;i++)
        printf("%d ",v[i]);
    printf("\n");

    return 0;
}