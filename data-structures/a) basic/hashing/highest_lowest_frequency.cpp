#include <bits/stdc++.h>
using namespace std;

vector<int> getFrequencies(vector<int> &v)
{
    // Write Your Code Here
    unordered_map<int, int> mpp;

    for (auto el : v)
        mpp[el]++;

    int largest = INT_MIN, smallest = INT_MAX;
    int largest_freq = 0, smallest_freq = INT_MAX;
    for (auto mp : mpp)
    {
        if (mp.second > largest_freq || (mp.second == largest_freq && mp.first < largest))
        {
            largest = mp.first;
            largest_freq = mp.second;
        }

        if (mp.second < smallest_freq || (mp.second == smallest_freq && mp.first < smallest))
        {
            smallest = mp.first;
            smallest_freq = mp.second;
        }
    }

    return {largest, smallest};
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> res = getFrequencies(arr);

    for (auto i : res)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}