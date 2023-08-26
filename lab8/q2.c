// priority queuee using max heap


#include <stdio.h>
#include <stdlib.h>

int q[10];
int n = 0;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void heapify(int arr[], int n, int i)
{
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    if (l < n && arr[l] > arr[largest])
        largest = l;

    if (r < n && arr[r] > arr[largest])
        largest = r;

    if (largest != i)
    {
        swap(&arr[i], &arr[largest]);
        heapify(arr, n, largest);
    }
}

void buildHeap(int arr[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
}

void heapSort(int arr[], int n)
{
    buildHeap(arr, n);
    for (int i = n - 1; i >= 0; i--)
    {
        swap(&arr[0], &arr[i]);

        heapify(arr, i, 0);
    }
}

void push()
{
    int i;
    printf("Enter the element to insert: ");
    scanf("%d", &i);
    q[n++] = i;
    heapSort(q, n);
    printf("Inserted!");
}

void pop()
{
    if (n == 0)
    {
        printf("Queue Empty");
        return;
    }
    printf("Popped Element: %d\n", q[0]);
    q[0] = q[n - 1];
    n--;
    heapSort(q, n);
}

void printQ()
{
    printf("Queue: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", q[i]);
    }
    printf("\n");
}

int size()
{
    return n;
}

int main()
{

    while (1)
    {
        int n;
        printf("\n1. Push an element\n2. Pop an element\n3. Print the queue\n4. Get size of queue\nEnter a command: ");
        scanf("%d", &n);
        if (n == 1)
        {
            push();
            continue;
        }
        if (n == 2)
        {
            pop();
            continue;
        }
        if (n == 3)
        {
            printQ();
            continue;
        }
        if (n == 4)
        {
            size();
            continue;
        }
        else
        {
            break;
        }
    }
}