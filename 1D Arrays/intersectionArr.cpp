#include <bits/stdc++.h>
using namespace std;

int intersectionArray(int arr1[], int m, int arr2[], int n)
{
    int ans = 0;
    int i = 0;
    int j = 0;
    set<int> s;
    while (i < n && j < m)
    {
        if (arr1[i] > arr2[j])
        {
            i++;
        }
        else if (arr1[i] < arr2[j])
        {
            j++;
        }
        else
        {
            s.insert(arr1[i]);
            i++;
            j++;
        }
        ans++;
    }
    cout << "Intersection : ";
    for (auto itr : s)
    {

        cout << itr << " ";
    }
    return ans;
}

int main()
{
    int arr1[6] = {1, 2, 3, 4, 5, 6};
    int arr2[5] = {1, 2, 3, 12, 13};

    intersectionArray(arr1, 6, arr2, 5);
    return 0;
}