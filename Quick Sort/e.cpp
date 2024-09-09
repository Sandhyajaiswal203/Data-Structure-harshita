#include <iostream>
using namespace std;
void quick(int ar[], int start, int end);
int part(int ar[], int start, int end);
int main()
{
    int arr[] = {23, 79, 45, 0, 35, 78};
    int n = 6;
    quick(arr, 0, n - 1);
    cout << "sorted array :";
    for (int i = 0; i < n; i++)
    {
        cout <<" "<< arr[i];
    }
    return 0;
}
void quick(int ar[], int start, int end)
{
    if (start < end)
    {
        int pivot = part(ar, start, end);
        quick(ar, 0, pivot - 1);
        quick(ar, pivot + 1, end);
    }
}
int part(int ar[], int start, int end)
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
            swap(ar[i], ar[j]);
        }
        else{
            break;
        }
    }
    swap(ar[start], ar[j]);
    return j;
}