#include <stdio.h>
int cifra(int n,int c){
    int OK=0;
    while(n!=0&&OK==0)
    {
        if(n%10==c)
            OK=1;
        n/=10;
    }
    if(OK)
        return 1;
    else
        return 0;
}
int main() {
	int n,c;
    scanf("%d %d",&n,&c);
    if(cifra(n,c))
        printf("DA");
    else
        printf("NU");
	return 0;
}