//
// Created by Eduard Andrei Radu on 09.11.2022.
//

#include <stdio.h>

int cifra(int n,int c);

int main() {
	int n,c;
    scanf("%d",&n);
    scanf("%d",&c);
    if(n <=-2147483648 || n>=2147483648 || c<0 || c>9)
    {
        printf("Date invalid introduse.");
        return 0;
    }
    if(cifra(n,c)==1)
    printf("DA\n");
    else
    printf("NU\n");
}

int cifra(int n,int c)
{
    int r=0;
    while(n!=0)
    {
        if(n%10==c)
        r++;
        n/=10;
    }
    if(r>0)
    return 1;
    return 0;
}