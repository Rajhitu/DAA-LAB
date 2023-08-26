// let there be a matrix ,wap by usinfg approproate user defined funct for the following task
// 1. find no. of non zero element tin the matrix
// 2. find sum of the elements among the main diagonal
// 3.display the elements within the minor elements
// 4.find the product of the diagonal elements
#include <stdio.h>

int non_zero(int a[100][100],int n)
{
      int c=0;
      for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] != 0)
            {
                c++;
              
            }
        }
    }
    
return c;
}

int sum_main(int a[100][100],int n)
{

     int  sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            
            if (i == j)
            {
                sum = sum + a[i][j];
                 
            }

           
        }
    }
    return sum;

}

void minor_diag(int a[100][100],int n)
{

  int minordiag[10],k=0;;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
         
            if (i + j == n - 1)
            {
                minordiag[k] = a[i][j];
                k++;
                
            }
        }
    }
        printf("\nthe elemtns in the minor  diagonal  elements are \n");


    for (int i = 0; i < k; i++)
    {
        printf("%d ", minordiag[i]);
    }





}

int prod(int a[100][100],int n)
{

  int  prod = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
          
            if (i == j)
            {
                
                  prod = prod * a[i][j];
            }

            if (i + j == n - 1)
            {
                
                prod = prod * a[i][j];
            }
        }
    }
    return prod;
    
}
int main()
{
    int a[100][100];
    int n;

    printf("how many rows or  col u have \n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

   

    printf("\nthe no. of non zero elements are %d\n", non_zero(a,n));

    printf("\nthe sum of the main diagonal  elements are %d\n", sum_main(a,n));
    printf("\nthe product of the both diag elements are %d\n", prod(a,n));
    minor_diag(a,n);

    
    return 0;
}