#include <stdio.h>
int nrcf(long n){
    int nr=0;
    if(n == 0)
        return 1;
    else {
        while (n != 0) {
            nr++;
            n /= 10;
        }
        return nr;
    }
}
int main() {
	long x;
    scanf("%ld",&x);
    printf("%d",nrcf(x));
	return 0;
}