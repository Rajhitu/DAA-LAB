// Write a program to test whether a number n, entered through keyboard is prime or
// not by using different algorithms you know for atleast 10 inputs and note down the time
// complexity by step/frequency count method for each algorithm & for each input.
// Finally make a comparision of time complexities found for different inputs, plot an
// appropriate graph & decide which algothm is faster.
#include <stdio.h>
#include <time.h>

int steps = 0;
double tt = 0.000000000;
clock_t end, start;

void check_prime(int n, int count)
{
    if (count)
    {
        printf("%d is not a Prime number\n", n);
    }
    else

        printf("%d is  a Prime number\n", n);

    printf("total time :%f \n total steps :%d\n",tt, steps);
}

void clock_start()
{

    steps = 0;
    // clock_t start;
    double total_time;
    start = clock();
}

void clock_stop()
{
    // clock_t start,end;

    end = clock();
    tt = (double)(end - start);
    tt = tt/CLOCKS_PER_SEC;
}

void algo1(int n)
{
    clock_start();
    int c = 0;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            c++;
            steps = steps + 3;

            break;
        }
        steps = steps + 2;
    }
    printf("\nALGO 1\n");
    clock_stop();

    check_prime(n, c);
}
void algo2(int n)
{
    steps = 0;
    int c = 0;
    clock_start();

    for (int i = 2; i < n / 2; i++)
    {
        if (n % i == 0)
        {
            c++;
            steps = steps + 3;

            break;
        }
        steps = steps + 2;
    }
    printf("\nALGO 2\n");
    clock_stop();

    check_prime(n, c);
}
void algo3(int n)
{
    steps = 0;
    clock_start();

    int c = 0;
    for (int i = 2; i * i < n; i++)
    {
        if (n % i == 0)
        {
            c++;
            steps = steps + 3;

            break;
        }
        steps = steps + 2;
    }
    printf("\nALGO 3\n");
    clock_stop();

    check_prime(n, c);
}
int main()
{
    int n;
    printf("Enter the number: \n");
    scanf("%d", &n);

    algo1(n);
    algo2(n);
    algo3(n);
    return 0;
}