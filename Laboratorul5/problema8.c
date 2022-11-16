//
// Created by Eduard Andrei Radu on 09.11.2022.
//

#include <stdio.h>
#include <stdlib.h>
 
int min(int a, int b) {
    if(a > b)
        return b;
    else return a;
}
 
int max(int a, int b) {
    if(a > b)
        return a;
    else return b;
}
 
int arie_intersectie(int x11, int y11, int x12, int y12, int x21, int y21, int x22, int y22) {
    if(x11 >= x22 || x12 <= x21 || y11 <= y22 || y12 >= y21)
        return 0;
 
    int intersectX1, intersectY1, intersectX2, intersectY2;
    intersectX1 = max(x11, x21);
    intersectX2 = min(x12, x22);
    intersectY1 = min(y11, y21);
    intersectY2 = max(y12, y22);
 
    int arie = abs((intersectX2 - intersectX1) * (intersectY2 - intersectY1));
    return arie;
}
 
int main() {
    int x11, y11, x12, y12, x21, y21, x22, y22;
    scanf("%d%d%d%d%d%d%d%d", &x11, &y11, &x12, &y12, &x21, &y21, &x22, &y22);
    printf("%d\n", arie_intersectie(x11, y11, x12, y12, x21, y21, x22, y22));
	return 0;
}
