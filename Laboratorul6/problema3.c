//
// Created by Eduard Andrei Radu on 10.11.2022.
//

#include <stdio.h>
int nrc;
void intersectie(int *a,int *b,int na,int nb,int *c){
    for(int i=0;i<na;i++)
        for(int j=0;j<nb;j++)
            if(a[i]==b[j])
                c[nrc++]=a[i];
}

int main()
{
    int a[1000],b[1000],c[2000]={0},na,nb,i,j;
    scanf("%d",&na);
    for(i=0;i<na;i++)
        scanf("%d",&a[i]);
    scanf("%d",&nb);
    for(i=0;i<nb;i++)
        scanf("%d",&b[i]);
    
    intersectie(a,b,na,nb,c);
    printf("%d \n",nrc);
    for(i=0;i<nrc;i++)
        printf("%d ",c[i]);
    printf("\n");


    return 0;
}