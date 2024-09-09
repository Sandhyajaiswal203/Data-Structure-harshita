#include <stdio.h>
int linearsearch(int arr[], int n, int s);
int main()
{
    int e;
    int list[] = {6, 42, 5, 45, 3, 43, 7, 67, 22, 43, 65, 32, 221, 133, 90};
    int s = sizeof(list) / sizeof(int);
    printf("enter the element you want to search :");
    scanf("%d", &e);
    linearsearch(list, e, s);

    return 0;
}
int linearsearch(int arr[], int n, int s)
{
    for (int i = 0; i <= s-1; i++)
    {
        if (arr[i] == n)
        {
            printf("Element Found at index %d.", i);
            
        }
        if(arr[i]=!n){
            printf("Not Found");
        }

       
    }
}
