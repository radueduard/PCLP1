#include <stdio.h>
#include <stdlib.h>

int arie_intersectie(int x11, int y11, int x12, int y12, int x21, int y21, int x22, int y22)
{
	int x31, x32, y31, y32, aria;
	if (x11 == x12 || y11 == y12 || x21 == x22 || y21 == y22)
		return 0;
	if (x11 < x21)
		x31 = x21;
	else
		x31 = x11;
	if (x12 < x22)
		x32 = x12;
	else
		x32 = x22;
	if (y11 < y21)
		y31 = y11;
	else
		y31 = y21;
	if (y12 < y22)
		y32 = y22;
	else
		y32 = y12;

	aria = abs(x31 - x32) * abs(y31 - y32);
	return aria;
}
int main()
{
	int x11, y11, x12, y12, x21, y21, x22, y22;
	scanf("%d%d%d%d%d%d%d%d", &x11, &y11, &x12, &y12, &x21, &y21, &x22, &y22);
	printf("%d\n", arie_intersectie(x11, y11, x12, y12, x21, y21, x22, y22));
}