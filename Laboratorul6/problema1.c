//
// Created by Eduard Andrei Radu on 10.11.2022.
//

#include <stdio.h>

void bubble_sort(int a[], int n) 
{
    int temp;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n - i - 1; j++) {
        if (a[j] > a[j + 1]) {
          temp = a[j];
          a[j] = a[j + 1];
          a[j + 1] = temp;
        }
      }
  }
}
int main()
{
    int arr[100], n, i;
    scanf("%d", &n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    bubble_sort(arr, n);
    for ( i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}