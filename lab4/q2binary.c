#include <stdio.h>
#include <stdlib.h>
int c = 0;
void insertion_sort(int a[], int n,int key)
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
    //  int temp = key;
    int j = n - 1;
    while (key < a[j] && j >= 0)
    {
        a[j + 1] = a[j];

        j--;
    }
    a[j + 1] = key;

}


   

void binary_search(int a[], int n, int key)
{

    int l = 0;
    int h = n - 1;
    int mid;

    while (l <= h)
    {
        mid = (h + l) / 2;
        if (key == a[mid])
        {
            printf("key found at index %d", mid);
            c++;
            break;
        }
        else if (key <= a[mid])
        {
            h = mid - 1;
        }
        else if (key >= a[mid])
        {
            l = mid + 1;
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

  

    printf("\nenter the element u want to search using binary search");
    scanf("%d", &key);

    binary_search(arr, n, key);
      printf("SORTING DONE USING INSERTION SORT\n");
    // insertion_sort(arr, n);

    if (c == 0)
    {
        printf("\nelement not found");

        printf("\ninserting the key->%d in the array using insertion sort\n", key);
        insertion_sort(arr, n, key);
        printf("\n ARRAY BECOMES:");
        for (int i = 0; i <= n; i++)
        {
            printf("%d ", arr[i]);
        }
    }
    else
    {
    printf("\n ARRAY BECOMES:");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    }

    return 0;
}