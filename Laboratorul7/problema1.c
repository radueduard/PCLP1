#include <stdio.h>

<<<<<<< HEAD
void swap(int* pa, int* pb)
{
    int x;
    x = *pa;
    *pa = *pb;
    *pb = x;
}

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    swap(&a, &b);
    printf("%d %d", a, b);
    return 0;
}
=======
int main()
{
    printf("Hello world\n");
    return 0;
}
>>>>>>> main
