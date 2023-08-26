// #include <stdio.h>
// #include <time.h>
// #include<math.h>
// int main()
// {
//     int n;
//     clock_t start, end;
//     double total_cputime;
//     start = clock();
//     int flag=0;

//     // T(n) = O(n^1/2)
//     printf("Enter a number: \n");
 
//     scanf("%d", &n);
 
//     for (int i = 2; i <= sqrt(n); i++) {
 
//         if (n % i == 0) {
//             flag = 0;
//             break;
//         }
//     }
 
//     if (n <= 1)
//         flag = 0;
 
//     if (flag == 1) {
//         printf("%d is a prime number", n);
//     }
//     else {
//         printf("%d is not a prime number", n);
//     }




    
//     end = clock();
//     printf("\nstarting time=%ld", start);
//     printf("\nEnd time =%ld", end);

//     total_cputime = ((double)(end - start));
//     printf("\ntotal_cputime =%f", total_cputime);

//     total_cputime = ((double)(end - start)) / CLOCKS_PER_SEC;
//     printf("\ntotal_cputime in second =%f", total_cputime);

//     return 0;
// }

// #include<stdio.h>
// #include<stdlib.h>
// #include<time.h>
// int main(){
// int num, temp = 0;
// clock_t start,end;
// double total_cputime;

//     // read input from the user.

//     printf("Enter any number to Check for Prime: ");

//     scanf("%d", &num);
//     start=clock();
//     // initialization

//     int i = 2; 

//     // loop condition

//     while (i <= num / 2)

//     {

//         // check if num is divisible by any number.

//         if (num % i == 0)

//         {

//             temp++;

//             break;

//         }

//         // incrementation

//         i++;

//     }

//     // check for the value of temp and num.

//     if (temp == 0 && num != 1)

//     {

//         printf("%d is a Prime Number", num);

//     }

//     else

//     {

//         printf("%d is Not a Prime Number", num);

//     }
// end=clock();
// printf("\n starting time: %ld",start);
// printf("\n end time: %ld", end);
// total_cputime=((double)(end-start));
// printf("\n total_cputime= %f",total_cputime);
// total_cputime=((double)(end-start))/CLOCKS_PER_SEC;
// printf("\n total_cputime= %f",total_cputime);
// return 0;
// }

#include <stdio.h>
#include <time.h>

int main()
{
    int n;
    printf("Enter a number: \n");
    scanf("%d", &n);

    int a, b, c;
    clock_t start, end;
    double total_cputime;
    start = clock();


    // Wilson's Theorem;
    int m = n - 1;
    int factm = 1;
    // find factorial of n-1
    for (int i = 1; i <= m; i++)
    {
        factm *= i;
    }

    // add 1 to (n-1)!
    int factn = factm + 1;
    if (factn % n == 0)
    {
        // if remainder is 0
        printf(" %d  is prime number", n);
    }
    else
    {
        printf("%d  is not prime number", n);
    }




    end = clock();
    printf("\nstarting time=%ld", start);
    printf("\nEnd time =%ld", end);

    total_cputime = ((double)(end - start));
    printf("\ntotal_cputime =%f", total_cputime);

    total_cputime = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("\ntotal_cputime in second =%f", total_cputime);

    return 0;
}