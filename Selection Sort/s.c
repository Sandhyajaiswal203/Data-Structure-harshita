#include <stdio.h>
void selectionsort(int[], int n);
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
    selectionsort(arr, n);
    for (int i = 0; i <= n; i++)
    {
        printf("%d\t", arr[i]);
    }
    return 0;
}
void selectionsort(int a[], int n)
{
    for (int i = 0; i <= n; i++)
    {
        int key = i;
        for (int j = i + 1; j <= n; j++)
        {
            if(a[j]<=a[key])
            key = j;
        }
        int temp=a[key];
        a[key]=a[i];
        a[i]=temp;
    }
}