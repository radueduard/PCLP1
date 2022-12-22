<<<<<<< HEAD
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n=0, cap=5, * v,x;
	v = malloc(cap * sizeof(int));
	while (scanf("%d",&x))
	{
		if (x == 0)
			break;
		if (cap == n)
		{
			cap *= 2;
			v = realloc(v,cap * sizeof(int));
		}
		v[n++]=x;
	}
	for (int i = 0; i < n; i++)
		printf("%d ", v[i]);
	printf("\n");
=======
#include <stdio.h>

int main()
{
    printf("Hello world\n");
    return 0;
>>>>>>> main
}