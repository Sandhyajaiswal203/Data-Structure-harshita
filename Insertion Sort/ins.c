#include <stdio.h>
void insertionsort(int[], int n);
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
    insertionsort(arr, n);
    for (int i = 0; i <=n; i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}
void insertionsort(int a[], int n)
{
    for (int i = 1; i <= n; i++)
    {
        int temp=a[i];
        for (int j = i-1; j >=0; j--)
        {
            if(a[j]>=temp){
                a[j+1]=a[j];
                a[j]=temp;
            }
           
        }
        
    }
}