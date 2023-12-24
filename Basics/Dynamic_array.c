/*
Dynamic array usage in C
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    int *ar = (int *)malloc(n * sizeof(int));

    if (ar == NULL)
    {
        printf("Memory allocation failed\n");
        return 1; // Return with an error code
    }

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", ar[i]);
    }

    free(ar);
    return 0;
}
