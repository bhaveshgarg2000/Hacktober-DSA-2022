#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter no of inputs : ";
    cin >> n;
    int target;
    cout << "Enter Target : ";
    cin >> target;
    bool found = false;
    vector<int> arr;
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    for (int i = 0; i < n; i++)
    {
        int low = i + 1, high = n - 1;
        while (low < high)
        {
            int current = arr[i] + arr[low] + arr[high];
            if (current == target)
            {
                found = true;
            }
            if (current < target)
            {
                low++;
            }
            else
            {
                high--;
            }
        }
    }
    if (found)
    {
        cout << "Found";
    }
    else
    {
        cout << "Not Found";
    }

    return 0;
}