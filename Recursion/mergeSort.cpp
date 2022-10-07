#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int s, int e)
{
    int mid = s + (e - s) / 2;

    // array created to store the merged array
    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    // copying values of 1st half into main array
    int k = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[k++];
    }
    // copying values of 2nd half into main array

    k = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[k++];
    }

    // mergeing the two arrays
    int index1 = 0;
    int index2 = 0;
    int mainArrIndex = s;

    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            arr[mainArrIndex++] = first[index1++];
        }
        else
        {
            arr[mainArrIndex++] = second[index2++];
        }
    }

    while (index1 < len1)
    {
        arr[mainArrIndex++] = first[index1++];
    }
    while (index2 < len2)
    {
        arr[mainArrIndex++] = second[index2++];
    }
    delete [] first;
    delete [] second;
}

void mergeSort(int arr[], int s, int e)
{
    // base case
    if (s >= e)
    {
        return;
    }
    int mid = s + (e - s) / 2;
    // left part sort
    mergeSort(arr, s, mid);

    // right part sort
    mergeSort(arr, mid + 1, e);

    // merging the two sorted parts
    merge(arr, s, e);
}

int main()
{

    int arr[5] = {9, 2, 1, 5, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    mergeSort(arr, 0, 4);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}