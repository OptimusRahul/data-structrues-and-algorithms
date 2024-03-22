#include <bits/stdc++.h>
using namespace std;

vector<int> getSecondOrderElements(int n, vector<int> arr)
{
    // Write your code here.
    int largest = INT_MIN, smallest = INT_MAX;
    int second_largest = INT_MIN, second_smallest = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (largest < arr[i])
            largest = arr[i];
        if (smallest > arr[i])
            smallest = arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (second_smallest > arr[i] && smallest != arr[i])
        {
            second_smallest = arr[i];
        }
        if (second_largest < arr[i] && largest != arr[i])
        {
            second_largest = arr[i];
        }
    }

    vector<int> res;

    res.push_back(second_largest);
    res.push_back(second_smallest);

    return res;
}

vector<int> getSecondOrderElementsSorting(int n, vector<int> &arr)
{
    sort(arr.begin(), arr.end());
    vector<int> res;
    res.push_back(arr[n - 2]);
    res.push_back(arr[1]);
    return res;
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    vector<int> res = getSecondOrderElementsSorting(n, arr);

    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }

    cout << endl;

    vector<int> res1 = getSecondOrderElements(n, arr);

    for (int i = 0; i < res1.size(); i++)
    {
        cout << res1[i] << " ";
    }

    cout << endl;

    return 0;
}