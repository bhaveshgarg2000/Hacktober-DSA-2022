#include <iostream>
#include <climits>
using namespace std;

void getMinMax(int arr[], int N)
{
    int max = arr[0], min = arr[0];
    for (int i = 0; i < N; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
        if (min > arr[i])
        {

            min = arr[i];
        }
    }
    cout << "Maximum Value = " << max << "\n";
    cout << "Minimum Value = " << min << "\n";
}
int main()
{
    int size;
    cout << "Enter the Size : ";
    cin >> size;

    int num[100];
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }
    getMinMax(num, size);

    return 0;
}
