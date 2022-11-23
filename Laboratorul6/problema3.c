//
// Created by Eduard Andrei Radu on 10.11.2022.
//

#include <stdio.h>
int nc;
int extragere(int a[], int b[], int na, int nb, int c[]){
    int nc=0;
    for(int i=0;i<na;i++)
      for(int j=0;j<nb;j++){
        if(a[i]==b[j]){
            c[nc]=a[i];
            nc++;
        }
    }
    return nc;
    
}


int main()
{
    int na,nc;
    scanf("%d", &na);
    int a[100];
    for(int i=0;i<na;i++)
        scanf("%d", &a[i]);
    int nb;
    scanf("%d", &nb);
    int b[100];
    for(int i=0;i<nb;i++)
        scanf("%d", &b[i]);
    int c[100];
    nc=extragere(a,b,na,nb,c);
    printf("%d\n",nc);
    for(int i=0;i<nc;i++)
        printf("%d ",c[i]);
        
    
    return 0;
}