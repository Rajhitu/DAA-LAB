// in buuble sort find the no. of comparision in following cases
// 1. for elelments in ascending order   7 8 9 10 11
// 2. for elements in descending order  11 10 9 8 7
// 3.in random manner
#include <stdio.h>
int main()
{

    int a[100], n;
    printf("how many values u want to be in the array");
    scanf("%d", &n);
    printf("enter  values in the array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
   int count=0;
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                 
               count++;
            }
        }    }

//    while (countinue==1)
   
//    {
// printf("enter in ascending order\n")


//    }
 printf("the no. of swap are %d ",count);
    

}