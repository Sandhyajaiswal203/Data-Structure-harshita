#include <stdio.h>
int main()
{
    int a[10] = {10,70, 8, 9, 94, 96, 98, 992, 9345, 99912};
    int n = 10, temp, min;
     for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    for (int i = 0; i < n ; i++)
    {        min=i;
        for (int j = i+1; j < n ; j++)
        {
            
            if (a[j] < a[min])
            {
                temp = a[j];
                a[j] = a[min];
                a[min] = temp;
              
            }
        }
     
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
