// wap to find min and max 

// 1. linear approach
#include <stdio.h>
#include <stdlib.h>
void linear(int *arr, int n)
{
    int max = arr[0], min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    printf("Max element:%d\n", max);
    printf("Min element:%d\n", min);
}

int main()
{
    int n;
    printf("Enter the size:\n");
    scanf("%d", &n);
    int *arr = (int *)malloc(sizeof(int) * n);
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    linear(arr, n);
}


