#include<iostream>
using namespace std;
void quicksort(int ar[], int start, int end);
int partition(int ar[], int start, int end);
int main()
{
    int n;
    int arr[] = {34, 43, 56, 1, 90, 6};
    n = 6;
    quicksort(arr, 0, n - 1);
    printf("sorted array -->");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }
    return 0;
}
void quicksort(int ar[], int start, int end)
{
    if (start < end)
    {
        int pindex = partition(ar, start, end);
        quicksort(ar, start, pindex - 1);
        quicksort(ar, pindex + 1, end);
    }
}
int partition(int ar[], int start, int end)
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
        while (ar[j] >pivot)
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