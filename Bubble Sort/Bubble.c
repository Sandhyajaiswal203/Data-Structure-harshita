#include <stdio.h>
void bubble(int ar[], int n);
int main()
{
    int n;

    printf("enter the size of an array :");
    scanf("%d", &n);
    int arr[n];
    printf("enter the elements of an array :");
    for (int i = 0; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }

    bubble(arr, n);
    for (int i = 0; i <=n; i++)
    {
        printf("%d\t",arr[i]);
    }
    

    return 0;
}
void bubble(int ar[], int n)
{  
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n - i-1; j++)
        {
            if (ar[j] > ar[j + 1])
            {
                int temp = ar[j];
                ar[j] = ar[j + 1];
                ar[j + 1] = temp;
            }
        }
    }
}