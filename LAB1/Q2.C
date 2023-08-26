// WAP in  C input 10 no. in  an aray FROM USER AND SORT THE aRAY AND DISPLAY IT
#include <stdio.h>
#include <string.h>

int main()
{

    int a[10];
    printf("enter 10 elements in the array:");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("the aray is :\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }


    for (int i = 0; i < 10 - 1; i++) // Buble sort
    {
        for (int j = 0; j < 10 - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {

                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("\n After sorting the  aray is :\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}