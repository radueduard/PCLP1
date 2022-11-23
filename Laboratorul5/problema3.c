//
// Created by Eduard Andrei Radu on 09.11.2022.
//

#include <stdio.h>

int prim(int n) {
	int i, k = 0;
	for (i = 1; i <= n ; i++) {
		if (n % i == 0) k++;
	}
	if ((k == 1)||(k == 2)) return 1;
	else return 0;
}

int main () {
	int n, i;
	scanf("%d", &n);
	for (i = 1; i < n / 2; i++) {
		if (prim(i)) {
			if (prim(n - i)) printf("%d + %d\n", prim(i), prim(n - 1));
		}
    }
return 0;
}
