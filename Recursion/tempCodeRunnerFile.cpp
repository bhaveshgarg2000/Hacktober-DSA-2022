#include <iostream>
using namespace std;

int reverseArray(int arr[], int start, int end)
{
    // base case
    if (start >= end)
    {
        return false;
    }

    if (arr[start] <= arr[end])
    {
        swap(arr[start], arr[end]);
    }
    // progessive call
    start = start + 1;
    end = end - 1;
    // recursive call
    reverseArray(arr, start + 1, end - 1);
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    cout << endl;
    cout << "Original Array : ";
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    cout << endl;
    int ans = reverseArray(arr, 0, 4);

    cout << "Reversed Array : ";
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    cout << endl;



    // cout << "Array : " << ans;
    return 0;
}