#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int max, min;

int merge(int a[], int l, int m, int h)
{

    for (int j = m + 1; j <= h; j++)
    {
        if (max < a[j])
        {
            max = a[j];
        }
        if (min > a[j])
        {
            min = a[j];
        }
    }
    for (int i = l; i <= m; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
        if (min > a[i])
        {
            min = a[i];
        }
    }
}

void mergesort(int a[], int l, int h)
{
    int n;
    if (h > l)
    {
        n = (l + h) / 2;
        mergesort(a, l, n);
        mergesort(a, n + 1, h);
        merge(a, l, n, h);
    }
}

int main()
{

    int arr[100], n;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    min = max = arr[0];

    mergesort(arr, 0, n);

    printf("\nmin and max are %d %d \n", min, max);

    return 0;
}
