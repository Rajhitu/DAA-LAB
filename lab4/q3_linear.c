#include <stdio.h>
#include <stdlib.h>
int c = 0;
void insertion_sort(int a[], int n, int key)
{

    for (int i = 1; i < n; i++)
    {
        int temp = a[i];
        int j = i - 1;
        while (temp < a[j] && j >= 0)
        {
            a[j + 1] = a[j];

            j--;
        }
        a[j + 1] = temp;
    }

    int k = n-1 ;
    while (key < a[k] && k >= 0)
    {
        a[k + 1] = a[k];

        k--;
    }
    a[k+1] = key;
}

void linear_search(int arr[],int n,int key)
{
        for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {

            printf("element is there in the array\n");
            c++;
            break;
        }
    }


}
int main()
{

    int *arr, n, key;
    printf("how many element s u have \n");
    scanf("%d", &n);
    arr = (int *)malloc(sizeof(int) * n + 1);
    printf("enter elements in the array \n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("enter the element u want to search using linear search");
    scanf("%d", &key);
    linear_search(arr,n,key);

  



    if (c == 0)
    {
        printf("element is NOT  in the array\n");
        printf("\ninserting the key->%d in the array using insertion sort\n", key);
      insertion_sort(arr, n, key);
    }

    printf("ARRAY BECOMES:");
    for (int i = 0; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}