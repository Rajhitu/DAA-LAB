// wap to implement a modified merge sort where it divides the array 
// into any random size 

#include <stdio.h>
#include <stdlib.h>
void merge(int arr[], int low, int mid, int high)
{
    int i = low, j = mid + 1, k = 0, aux[high - low + 1];
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
void mergeSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int mid = (low + (low + high) / 2) / 2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
    return;
}
int main()
{
    int n;
    printf("Enter the size of the Array:\n");
    scanf("%d", &n);
    int *arr = (int *)malloc(sizeof(int) * n);

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
        
    mergeSort(arr, 0, n - 1);

    printf("After Sorting:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}