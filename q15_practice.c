// find exact power of 2 - bitwise operator /factor
#include <stdio.h>
int main()
{
    int num, temp;
    int count = 0;

    printf("enter number\n");
    scanf("%d", &num);

    // for (int i = 2; num % i == 0;i = i * 2)
    // {

    //     count ++;
    // }
    // printf("power of 2 is %d\n", count);
    temp = num;
    for (int i = 1; temp == num; i++)
    {
        num = num >> i;
        num = num << i;
        count++;
        // i++;
    } // while(temp==num);

    printf("power of 2 is %d\n", (count - 1));
    return 0;
}