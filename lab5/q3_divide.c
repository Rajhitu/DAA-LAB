// wap to implement modified merge sort 
// using  insertion sort to sort subarrays produced during DIVIDE steps and merged using 
// standard MERGE procedure

#include <stdio.h>
#include <stdlib.h>
void merge(int arr[], int low, int mid, int high)
{
    int i = low, j = mid + 1, k = 0;
    int aux[high - low + 1];
    while (i <= mid && j <= high)
    {
        if (arr[i] < arr[j])
            aux[k++] = arr[i++];
        else
            aux[k++] = arr[j++];
    }

    while (i <= mid)
        aux[k++] = arr[i++];
    while (j <= high)
        aux[k++] = arr[j++];

    k = 0, i = low;
    while (i <= high)
        arr[i++] = aux[k++];
}

void insertion_sort(int *arr, int low, int high)
{
    for (int i = low + 1; i <= high; i++)
    {
        int j = i - 1;
        int item = arr[i];
        while (arr[j] > item && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = item;
    }
}
void mergesort(int arr[], int low, int high)
{
    if (low < high)
    {
        if (low - high <= 20)
            insertion_sort(arr, low, high);
        else
        {
            int mid = (low + high) / 2;
            mergesort(arr, low, mid);
            mergesort(arr, mid + 1, high);
            merge(arr, low, mid, high);
        }
    }
}
int main()
{
    int n;
    printf("Enter the size of the Array:\n");
    scanf("%d", &n);
    int *arr = (int *)malloc(sizeof(int) * n);

    // printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
        arr[i] = rand() % 100;

    mergesort(arr, 0, n - 1);

    printf("After Sorting:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}