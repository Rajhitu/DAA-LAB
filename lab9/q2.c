// activity_Selec selection
#include <stdio.h>
#include <stdlib.h>
// struct activity_Selec
// {
//     int startTime;
//     int endTime;
// };
// void insertionSort(struct activity_Selec *arr, int low, int high)
// {
//     for (int i = low + 1; i <= high; i++)
//     {
//         int j = i - 1;
//         struct activity_Selec item = arr[i];
//         while (j >= 0 && item.endTime < arr[j].endTime)
//         {
//             arr[j + 1] = arr[j];
//             j--;
//         }
//         arr[j + 1] = item;
//     }
// }
// int main()
// {
//     struct activity_Selec time[6] =
//         {
//             {1, 2},
//             {3, 4},
//             {0, 6},
//             {5, 7},
//             {8, 9},
//             {5, 9}
//         };

//     insertionSort(time, 0, 5);

//     struct activity_Selec sol[6];
//     sol[0] = time[0];
//     int k = 1;
//     for (int i = 1; i < 6; i++)
//     {
//         if (sol[k - 1].endTime <= time[i].startTime)
//             sol[k++] = time[i];
//     }

//     printf("output:\n");
//     for (int i = 0; i < k; i++)
//     {
//         printf("%d %d", sol[i]);
//         printf("\n");
//     }
// }

int main()
{

printf("%d",4*"*");
    return 0;
}
