// star trangle
#include <stdio.h>
int main()
{
    int i, j, n;
    printf("enter the number of rows:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (size_t j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}