#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, k, i, j;
    int *matrice = malloc(1001 * sizeof(int));
    int *matrice1 = malloc(1001 * sizeof(int));

    scanf("%d", &n);
    scanf("%d", &k);
    for(i = 0; i < n + 2 ;i++)
    {
        int *rev;
        matrice[0] = 1;
        matrice[i] = 1;

        for(j = 0; j < i; j++)
        {
           matrice1[j] = matrice[j-1] + matrice[j];
        }

        rev = matrice;
        matrice = matrice1;
        matrice1 = rev;

    }
    printf("%d",matrice1[k]);
    return 0;
}