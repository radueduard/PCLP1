#include <stdio.h>
void swap(int *pa,int *pb)
{
<<<<<<< HEAD
    *pa=*pa+*pb;
    *pb=*pa-*pb;
    *pa=*pa-*pb;
}
int main()
{   int a,b;
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("%d %d",a,b);
=======
    printf("Hello world\n");
>>>>>>> main
    return 0;
}