//
// Created by Eduard Andrei Radu on 09.11.2022.
//
 
// am tratat cazul cu matricea de aparitii desi pe site scria ca coord pot fi pana la 1 milion
 
#include <stdio.h>
void matrice0(int a[][101]);
//functia initializeaza matricea cu 0
int arie_intersectie(int x11, int y11, int x12, int y12, int x21, int y21, int x22, int y22);
int main() {
   int x11,y11,x12,y12,x21,y21,x22,y22;
   scanf("%d%d%d%d%d%d%d%d",&x11,&y11,&x12,&y12,&x21,&y21,&x22,&y22);
   printf("%d",arie_intersectie(x11,y11,x12,y12,x21,y21,x22,y22));
   return 0;
}
void matrice0(int a[][101])
{
   int i,j;
   for(i=0;i<101;i++)
       for(j=0;j<101;j++)
           a[i][j]=0;
}
int arie_intersectie(int x11, int y11, int x12, int y12, int x21, int y21, int x22, int y22)
{
   int a[101][101];
   matrice0(a);
   int i,j;
   for(i=x11;i<x12;i++)
       for(j=y11;j>y12;j--)
           a[i][j]++;
   for(i=x21;i<x22;i++)
       for(j=y21;j>y22;j--)
           a[i][j]++;
   int k=0;
   for(i=0;i<101;i++)
       for(j=0;j<101;j++)
           if(a[i][j]==2)
               k++;
   return k;
 
 
 
 
}
 
 
 

