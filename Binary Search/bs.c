#include <stdio.h>
int bs(int arr[], int low, int high, int sv);
int main()
{
    int n;
    printf("enter the no. of elements :");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int a;
    printf("enter the element which  you want to search :");
    scanf("%d", &a);
    int x = bs(arr, 0, n - 1, a);
    printf("The element %d is searched at index %d", a, x);
    return 0;
}
int bs(int arr[], int low, int high, int sv)
{
    int mid = (low + high) / 2;
    while (low < high)
    {
        if (arr[mid] == sv)
        {
            return mid;
        }
        else if(sv < arr[mid])
        {
           high  = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
}