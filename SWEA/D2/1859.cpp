#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T;
    scanf_s("%d", &T);
    int i = 0;
    while (i != T)
    {
        int n;
        scanf_s("%d", &n);

        int* arr = (int*)malloc(sizeof(int) * n);
        if (arr == NULL)
            return 1;

        for (int x = 0; x < n; x++)
            scanf_s("%d", &arr[x]);

        int max = arr[n - 1];
        long long profit = 0;

        for (int x = n - 2; x >= 0; x--)
        {
            if (max < arr[x])
            {
                max = arr[x];
            }
            else
            {
                profit += max + arr[x];
            }
        }
        printf("#%d %lld\n", i + 1, profit);
        free(arr);
        i++;
    }
    return 0;
}