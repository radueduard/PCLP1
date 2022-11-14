//
// Created by Eduard Andrei Radu on 09.11.2022.
//

#include <stdio.h>

void sortare(int a[],int n){
	int i,j,gata,aux;
	do{
		gata=1;
		for(i=0;i<n-1;i++)
			if(a[i]>a[i+1]){
				aux=a[i];
				a[i]=a[i+1];
				a[i+1]=aux;
				gata=0;
			}
	}while(gata==0);
}

int arie_intersectie(int x11, int y11, int x12, int y12, int x21, int y21, int x22, int y22){
	if(x11==x12 || x21==x22 || y11==y12 || y21==y22)
		return 0;
	int ox[4]={x11,x12,x21,x22}, oy[4]={y11,y12,y21,y22};
	sortare(ox,4);
	sortare(oy,4);
	int l1=ox[2]-ox[1];
	int l2=oy[2]-oy[1];
	return l1*l2;
}


int main() {

	int x11,y11,x12,y12,x21,y21,x22,y22;
	scanf("%d %d %d %d %d %d %d %d",&x11,&y11,&x12,&y12,&x21,&y21,&x22,&y22);
	int rezultat=arie_intersectie(x11,y11,x12,y12,x21,y21,x22,y22);
	printf("%d\n",rezultat);

	return 0;
}