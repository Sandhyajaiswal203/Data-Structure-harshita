#include <stdio.h>
int main()
{
    int a[10] = {10,70, 80, 93, 94, 96, 98, 992, 9345, 99912};
    int n = 10, temp, flag = 0;
     for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    for (int i = 0; i < n ; i++)
    {
        for (int j = 0; j < n - i ; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                flag = 1;
            }
        }
        if (flag == 0)
        {
            printf("list is sorted");
            break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
