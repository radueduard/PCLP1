//
// Created by Eduard Andrei Radu on 10.11.2022.
//

#include <stdio.h>

void extrage(int array1[], int array2[], int x, int y)
{
    int i, j , b = 0, array3[100];
    for ( i = 0; i < x; i++)
    {
        for ( j = 0; j < y; j++)
        {
            if (array1[i] == array2[j])
            {
                array3[b] = array1[i];
                b++;
            }
        }
    }
    for (i = 0; i < b; i++)
    {
        printf("%d ", array3[i]);
    }
    
}

int main()
{
    int arr1[100], arr2[100], a, b, i;
    scanf("%d", &a);
    for ( i = 0; i < a; i++)
    {
        scanf("%d", &arr1[i]);
    }
    scanf("%d", &b);
    for ( i = 0; i < b; i++)
    {
        scanf("%d", &arr2[i]);
    }
    extrage(arr1, arr2, a ,b);
    return 0;
}