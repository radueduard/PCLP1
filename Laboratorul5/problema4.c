//
// Created by Eduard Andrei Radu on 09.11.2022.
//

#include <stdio.h>

int cmmdc(int a, int b) {
	while (a != b) {
		if (a < b) {
			b = b - a;
		}
		if (a > b) {
			a = a - b;
		}
	}
	return a;
}
int main() {
	int x1, y1, x2, y2, numitor;
	scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
	numitor = (y1 * y2) / cmmdc(y1, y2);
	printf("%d %d\n", x1 * (numitor / y1), numitor);
	printf("%d %d\n", x2 * (numitor / y2), numitor);
	return 0;
}