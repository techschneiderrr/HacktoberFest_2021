#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, nE;
    int *ptr;
    printf("Enter number of elements\n");
    scanf("%d", &n);
    printf("Enter elements\n");
    ptr = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }
    int max = ptr[0];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (ptr[i] < ptr[j])
            {
                max = ptr[j];
            }
        }
    
    }
    printf("greater num is %d\n", max);
    int min = ptr[0];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (ptr[i] > ptr[j])
            {
                min = ptr[j];         
            }
        }
    }
    printf("smaller num is %d", min);

    return 0;
}
