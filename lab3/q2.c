// to find whether prod of rest element in the loop except that element and use only one loop

#include <stdio.h>

int main()
{
    // int arr[] = {1, 2, 3, 4, 5};
    // printf("1 2 3 4 5\n");
    int arr[100], n;
        printf("How many elements do you have\n");

    scanf("%d",&n);

    printf("enter %d elements\n",n);

    int prod = 1;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        prod = prod * arr[i];
    }

    for (int i = 0; i < 5; i++)
    {
        arr[i] = prod / arr[i];
        printf("%d ", arr[i]);
    }

    return 0;
}

