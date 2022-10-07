#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    cout << endl
         << "Printing the Array : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    int number[10] = {0, 1, 2, 3, 4, 5, 6, 7};
    int n = 10;
    printArray(number, 10);

    int one[5] = {2, 7};
    n = 5;

    printArray(one, 5);

    return 0;
}