// q2 wap that takes 3 variables a,b,c as seperate parameters and rotates the values store
//  so the value a goes to b b to c and  to a by using swap(x,y) function.
//  that exchanges the no. x abd y
#include <stdio.h>
int b;
void swap(int *x, int *y)
{

    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;

    int temp = b;
    b = *y;
    *y = temp;
}
int main()

{

    int a, c;
    printf("ennter the values of a ,b,c\n");

    scanf("%d%d%d", &a, &b, &c);
    printf("\n before  swap values of\n a--->%d \n b----->%d \n c----->%d\n",a,b,c);
    swap(&a, &c);

    printf("\n after  swap values of \na--->%d \n b----->%d \n c----->%d\n",a,b,c);


    return 0;
}