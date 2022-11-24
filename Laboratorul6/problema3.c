//
// Created by Eduard Andrei Radu on 10.11.2022.
//

#include<stdio.h>

void extragere_elemente(int * a, int * nr_a, int * b, int * nr_b, int * c)
{
    int k = -1;
    for(int i = 0; i < * nr_a; i++)
        for(int j = 0; j < * nr_b; j++)
            if(a[i] == b[j])
            {
                c[++k] = a[i];
                break;
            }
    * nr_a = k + 1;
}

int main() {
    int a[1000], b[1000], nr_a, nr_b, c[1000];

    scanf("%d", &nr_a);
    for(int i = 0; i < nr_a; i++)
        scanf("%d", &a[i]);

    scanf("%d", &nr_b);
    for(int i = 0; i < nr_b; i++)
        scanf("%d", &b[i]);

    extragere_elemente(a, &nr_a, b, &nr_b, c);

    printf("%d\n", nr_a);
    for(int i = 0; i <= nr_a - 1; i++)
        printf("%d ", c[i]);
    printf("\n");
    return 0;
}
