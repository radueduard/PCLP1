#include <stdio.h>
#include <stdlib.h>

void count(int n, int *v, int *zero, int *poz, int *neg) {
    *zero = *poz = *neg = 0;
    for (int i = 0; i < n; ++i)
        if(v[i] == 0)
            (*zero)++;
        else if(v[i] > 0)
            (*poz)++;
        else (*neg)++;
}

int main()
{
<<<<<<< HEAD
    int *v, n, zero, poz, neg;
    scanf("%d", &n);
    v = malloc(n * sizeof(int));
    for (int i = 0; i < n; ++i)
        scanf("%d", &v[i]);
    count(n, v, &zero, &poz, &neg);
    printf("nule: %d\n", zero);
    printf("pozitive: %d\n", poz);
    printf("negative: %d\n", neg);
    free(v);
=======
    printf("Hello world\n");
>>>>>>> main
    return 0;
}