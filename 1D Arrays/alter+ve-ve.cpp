
void posAndNeg(vector<int> &arr)
{
    //     // Write your code here.
    int n = arr.size();
    vector<int> pos, neg;
    // //     pushing element in vector of postive and negative
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
            pos.push_back(arr[i]);
        else
            neg.push_back(arr[i]);
    }

    int n1 = pos.size();
    int n2 = neg.size();
    int i = 0, j = 0, k = 0;
    while (i < n1 || j < n2)
    {
        if (k % 2 == 0 && i < n1)
        {
            arr[k++] = pos[i++];
        }
        else if (k % 2 == 1 && j < n1)
        {
            arr[k++] = neg[j++];
        }
    }
}
