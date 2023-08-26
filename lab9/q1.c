// knack sap problem
#include <stdio.h>
struct Knacksap
{
    int price, weight;
    float ratio;
};
void insertionSort(struct Knacksap *arr, int low, int high)
{
    for (int i = low + 1; i <= high; i++)
    {
        int j = i - 1;
        struct Knacksap item = arr[i];
        while (j >= 0 && item.ratio < arr[j].ratio)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = item;
    }
}
int main()
{
    struct Knacksap item[6] =
        {
            {1, 2},
            {3, 4},
            {2, 6},
            {5, 7},
            {8, 9},
            {5, 9}};

    for (int i = 0; i < 6; i++)
        item[i].ratio = (float)item[i].weight / (float)item[i].price;
    int capacity;
    printf("Enter the total capacity:\n");
    scanf("%d", &capacity);
    insertionSort(item, 0, 5);

    for (int i = 0; i < 6; i++)
        printf("%d %d %f\n", item[i].price, item[i].weight, item[i].ratio);
    int profit = 0;

    for (int i = 0; i < 6; i++)
    {
        if (item[i].weight < capacity)
        {
            profit += item[i].price;
            capacity -= item[i].weight;
        }
        else
        {
            profit += item[i].ratio * capacity;
            capacity = 0;
            break;
        }
    }

    printf("Max profit: %d\n", profit);
}
