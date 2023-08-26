// WAP in  C input 10 no. in  an array find th elargest no in array
#include <stdio.h>
#include <string.h>

int main()
{

    int ar[10];
    printf("enter 10 elements in the array:");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &ar[i]);
    }
    printf("the array is :\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", ar[i]);
    }

    int max = ar[0];

    for (int i = 0; i < 10; i++)
    {
        if (ar[i] > max)
            max = ar[i];
    }

    printf("\nlargest no. in araay is  %d", max);

    return 0;
}