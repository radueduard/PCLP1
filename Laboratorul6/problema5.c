//
// Created by Eduard Andrei Radu on 10.11.2022.
//

#include <stdio.h>

void transform(int v[], int n, int x)
{
    int array2[n], end = n - 1, start, i;
    for ( i = 0; i < n; i++)
    {
        if (v[i] < x) {
        array2[start] = v[i];
        start++;
        } else {
        array2[end] = v[i];
        end--;
        }
    }
    for ( i = 0; i < n; i++)
    {
        printf("%d", array2[i]);
    }
    
}
int main()
{
    int arr1[100],n , x, i;
    scanf("%d %d", &n, &x);
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    transform(arr1, n, x);
    return 0;
}