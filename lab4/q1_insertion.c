#include <stdio.h>
#include <stdlib.h>

void insertion_sort(int a[], int n)
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
}

int main()
{

    int *arr, n;
    printf("how many element s u have \n");
    scanf("%d", &n);
    arr = (int *)malloc(sizeof(int) * n);
    printf("enter elements in the array \n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    // for (int i = 1; i < 5; i++)
    // {

    //     int j = i;

    //     int temp = a[j];

    //     while (a[j] >= temp && j >= 0)
    //     {
    //         a[j] = a[j - 1];
    //         j--;

    //     }
    //       a[j+1 ] = temp;
    // }
    insertion_sort(arr, n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

// // generalise expression for insertion sort
// t(n)=an^2+bn+c;

// // it all depends on what element is present in the array
// // if it is in ascending order or descending order or random __valueless

// f(n)<=cn^2//upper bound worst case
//         where c >a;

//         also
// f(n)>=cn^2/

// q2
// call the liner search funcnt then insert

// q3
//  one part is sorted and another is unsorted
//  so make binary search O(logn) and  call to insert

// and draw the graph of comparison in the above three cases.