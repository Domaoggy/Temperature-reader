/*C program to read and display temperature by Ogembo*/

#include <stdio.h>
void main()
{
    int tmp;

    printf("Input days temperature : ");
    scanf_s("%d", &tmp);
    if (tmp < 0)
        printf("Freezing weather.\n");
    else if (tmp < 20)
        printf("cold weather.\n");
    else if (tmp < 30)
        printf("Normal in temp.\n");
    else if (tmp >=30)
        printf("Its very Hot.\n");
    else
        printf("Its very hot.\n");
   
}
