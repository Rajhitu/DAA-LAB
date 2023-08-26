// wap to standareised quick sort

#include <stdio.h>
#include <stdlib.h>
int count =0;
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
int partition(int A[], int low, int high)
{int pivot;
   
         pivot = A[low];

    int i = low, j = high;
    do
    {
        do
        {
            i++;
        } while (A[i] <= pivot);
        do
        {
            j--;
        } while (A[j] > pivot);
        if (i < j)
            swap(&A[i], &A[j]);
    } while (i < j);
    swap(&A[low], &A[j]);
    return j;
}
void QuickSort(int A[], int low, int high)
{
    int j;
    if (low < high)
    {
        j = partition(A, low, high);
        QuickSort(A, low, j);
        QuickSort(A, j + 1, high);
    }
}
int main()
{
    int A[] = {11, 13, 7, 12, 16, 9, 24, 5, 10, 3};
    int n = 10, i;
    QuickSort(A, 0, n);
    for (i = 0; i < 10; i++)
        printf("%d ", A[i]);
    printf("\n");
    return 0;
}