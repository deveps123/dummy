#include <stdio.h>

void big2()
{
    int num1, num2;

    printf("\n\nEnter two integers :");
    scanf("%d%d", &num1, &num2);

    if (num1 > num2)
    {
        printf("Largest number is %d.", num1);
    }
    else
    {
        printf("Largest number is %d.", num2);
    }

//    return 0;
}
