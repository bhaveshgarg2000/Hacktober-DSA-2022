// Input: arr[] = {1, 2, 3, 4, 5, 6}
// Output: 6 2 4 3 5 1
// Operation 1: Swap 1 and 6
// Operation 2: Swap 3 and 4
// Input: arr[] = {5, 54, 12, 63, 45}
// Output: 45 54 12 63 5

// #inlcude<iostream>
#include<bits/stdc++.h>
using namespace std;
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void swapAlterBoundaryPairs(int arr[], int n)
{
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        swap(arr[i], arr[j]);
        i = i + 3;
        j = j - 3;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]); // 6 elements in an array
    swapAlterBoundaryPairs(arr, n);
    printArray(arr, n);
    return 0;
}