#include <stdio.h>

<<<<<<< HEAD
void count(int n, int *v, int *zero, int *poz, int *neg){
    *zero = *poz = *neg = 0;
    for (int i = 0; i < n; i++){
        if (v[i] < 0) (*neg)++;
        if (v[i] > 0) (*poz)++;
        if (v[i] == 0) (*zero)++;
    }
}

int main(){
    int vec[100], size, p, n, z;
    p = z = n = 0;
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
        scanf("%d", &vec[i]);
    count(size, vec, &z, &p, &n);
    printf("pozitive: %d\nnegative: %d\nzero: %d\n", p, n, z);
=======
int main()
{
    printf("Hello world\n");
    return 0;
>>>>>>> main
}