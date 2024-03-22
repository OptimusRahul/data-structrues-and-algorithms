#include <bits/stdc++.h>
using namespace std;

// vector<int> countFrequency(int n, int x, vector<int> &nums)
// {
//     // Write your code here.
//     vector<int> hash(x, 0);

//     vector<int> res;

//     for (int i = 0; i < n; i++)
//         hash[nums[i]-1]++;

//     for (int i = 0; i < n; i++)
//         res.push_back(hash[i]);

//     return res;
// }

vector<int> countFrequency(int n, int x, vector<int> &nums)
{
    // Write your code here.
    vector<int> hash(x, 0);

    for (int i = 0; i < n; i++)
    {
        int num = nums[i];
        if (num <= x)
        {
            hash[nums[i] - 1]++;
        }
    }

    hash.resize(n);

    return hash;
}

int main()
{
    int n, x;
    cin >> n >> x;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> res = countFrequency(n, x, arr);

    for (int i = 0; i < n; i++)
    {
        cout << res[i] << " ";
    }

    cout << endl;
}