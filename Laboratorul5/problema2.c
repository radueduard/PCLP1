#include <stdio.h>

int cifra(int n, int c){
    do{
        if(n%10==c) return 1;
        n=n/10;
    }while(n!=0);
    return 0;
}
int main() {
    int n,c,d;
    scanf("%d%d",&n,&c);
    d= cifra(n,c);
    if(d==1) {
        printf("DA");
    }
    else {
        printf("NU");
    }
    return 0;
}
