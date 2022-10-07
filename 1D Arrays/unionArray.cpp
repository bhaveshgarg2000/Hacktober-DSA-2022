#include <bits/stdc++.h>
using namespace std;

int main()
{
    int ans = 0;
    int n;
    cout << "Enter the size of Array : ";
    cin >> n;
    int t;
    cout << "Enter the number of Test cases : ";
    cin >> t;
    while (t--)
    {
        vector<int> v;
        int n, m;
        cout << "Enter the size of Array A : ";
        cin >> n;
        cout << "Enter the size of Array B : ";
        cin >> m;
        int a[n];
        int b[m];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            v.push_back(a[i]);
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
            v.push_back(b[i]);
        }

        // array sorting in vector
        sort(v.begin(), v.end());
        // ignoring same elements in an array
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] == v[i + 1])
            {
                continue;
            }
            ans++;
        }
    }
    // return ans;
    cout << "No Of Elements After Union : " << ans;
}