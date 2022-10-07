#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void revArray(int arr[], int n)
{
    int low = 0;
    int high = n - 1;
    while (low < high)
    {
        swap(arr[low], arr[high]);
        low++;
        high--;
    }
}

int main()
{

    int arr[5] = {0, 1, 2, 1, 2};
    revArray(arr, 5);
    printArray(arr, 5);
}