#include <stdio.h>
void swap(int *pa, int *pb)
{
    int aux;
    aux = *pa;
    *pa = *pb;
    *pb = aux;
}
int main()
{
<<<<<<< HEAD
    int a, b;
    scanf("%d%d", &a, &b);
    swap(&a, &b);
    printf("%d %d", a, b);

=======
    printf("Hello world\n");
>>>>>>> main
    return 0;
}