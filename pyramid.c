// code for star pyramid


#include <stdio.h>
int main()
{
    int number;
    printf("Enter a number :");
    scanf("%d", &number);
    for (int i = number; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
  
}