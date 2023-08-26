//merge sort using insertion sort

#include <stdio.h>
#include <stdlib.h>
void insertionSort(int arr[], int s, int e)
{

    for (int i = 1; i <= e; i++)
    {
        int temp = arr[i];
        int j = i;
        for (j = i - 1; j >= 0; j--)
        {
            if (arr[j] > temp)
                arr[j + 1] = arr[j];
            else
                break;
        }
        arr[j + 1] = temp;
    }
}

int partition(int arr[], int s, int e)
{
    int pivot = arr[e];
    int j = s;

    for (int i = s; i < e; i++)
    {
        if (arr[i] < pivot)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j += 1;
        }
    }

    int temp = arr[j];
    arr[j] = arr[e];
    arr[e] = temp;

    return j;
}

void quickInsertionSort(int arr[], int low, int high)
{
    while (low < high)
    {
        if (high - low + 1 < 10)
        {
            insertionSort(arr, low, high);
            break;
        }
        else
        {
            int pivot = partition(arr, low, high);
            if (pivot - low < high - pivot) // sort left part as its shorter
            {
                quickInsertionSort(arr, low, pivot - 1);
                low = pivot + 1;
            }
            else // sort right part as its shorter
            {
                quickInsertionSort(arr, pivot + 1, high);
                high = pivot - 1;
            }
        }
    }
}

int main()
{
    //int arr[21] = {24, 97, 40, 67, 88, 85, 15, 66, 53, 44, 26, 48, 16, 52, 45, 23, 90, 18, 49, 80, 23};

    // int *arr,i,n ;
    //  printf("Enter the size of the array : ");
    // scanf("%d", &n);
    // arr = (int *)malloc(sizeof(int) * n);
    // printf("enter array elements : \n");

    int i,n;
    n = 10 + rand() % 10;

    int arr[n];

printf("\nelements beffore sorting are :\n");
    for ( i=0; i < n; i++)
    {
        arr[i] = rand() % 100;
        printf("%d ", arr[i]);
        
    }

    quickInsertionSort(arr, 0, n-1);

printf("\nelements after sorting are :\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}