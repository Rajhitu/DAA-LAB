// WAP in  C input an array using random function and find the duplicate element array present in array
#include <stdio.h>
// #include <string.h>
#include <stdlib.h>

int main()
{

    int a[10], k = 0, dupl[10];
    printf("entering 10 elements in the array randomly");
    for (int i = 0; i < 10; i++)
    {
        a[i] = rand() % 10;
    }

    printf("the aray is :\n");

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\nthe duplicates elemet are :\n");

    for (int i = 0; i < 10 - 1; i++)
    {
        for (int j = i; j < 10; j++)
        {
            if (a[i] == a[j + 1])
            {
                dupl[k] = a[i];
                k++;
                break;
            }
        }
    }
    int c = 0;
    for (int i = 0; i < k; i++)
    {
        if (dupl[i] == dupl[i + 1])
            c++;

        else
        {

            printf("%d is the duplicate element and it occuers %d times\n", dupl[i], c + 2);
        c = 0;
        }
    }

    return 0;
}