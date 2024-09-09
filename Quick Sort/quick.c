#include <stdio.h>
#include <stdlib.h>
void quicksort(int ar[], int start, int end);
int breaking(int ar[], int start, int end);
int main()
{
    int n;
    int arr[] = {45, 4, 9, 8, 70, 5};
    n = 6;
    quicksort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}
void quicksort(int ar[], int start, int end)
{
    if (start < end)
    {
        int pivot = breaking(ar, start, end);
        quicksort(ar, start, pivot - 1);
        quicksort(ar, pivot + 1, end);
    }
}
int breaking(int ar[], int start, int end)
{
    int pivot = ar[start];
    int i = start;
    int j = end;
    int temp;
    while (i < j)
    {
        while (ar[i] <= pivot)
        {
            i++;
        }
        while (ar[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            temp = ar[i];
            ar[i] = ar[j];
            ar[j] = temp;
        }
        else
        {
            break;
        }
    }
    temp = ar[start];
    ar[start] = ar[j];
    ar[j] = temp;
    return j;
}