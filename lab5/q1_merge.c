//wap to implement merge sort



#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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
void mergesort(int arr[], int l, int r)
{
    if (l < r)
    {
        int mid = (l + r) / 2;
        mergesort(arr, l, mid);
        mergesort(arr, mid + 1, r);
        merge(arr, l, mid, r);
    }
    return;
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

    clock_t start, end;
    double total_time;
    start = clock();

    mergesort(arr, 0, n - 1);

    end = clock();
    total_time = (double)end - start;
    total_time = total_time / CLOCKS_PER_SEC;

    printf("After Sorting:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    printf("Time taken: \n", total_time);
}