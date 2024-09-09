#include <stdio.h>
int main()
{
    int a[10] = {10.70, 30, 23, 54, 56, 78, 2, 345, 12};
    int n = 10, temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j< n - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j] = temp;
            }