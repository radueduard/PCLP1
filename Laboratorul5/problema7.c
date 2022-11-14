//
// Created by Eduard Andrei Radu on 09.11.2022.
//

#include <stdio.h>

int transforma(int n){
	int v[10]={0};
	do{
		v[n%10]++;
		n=n/10;
	}while(n);
	n=0;
	if(v[0]==0){
		for(int i=1;i<=9;i++)
			if(v[i]!=0)
				for(int k=0;k<v[i];k++)
					n=n*10 + i;
	}else{
		for(int i=9;i>=0;i--)
			if(v[i]!=0)
				for(int k=0;k<v[i];k++)
					n=n*10 + i;
	}
	return n;
}

int main() {

	int n;
	scanf("%d",&n);
	n=transforma(n);
	printf("%d\n",n);

	return 0;
}