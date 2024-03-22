#include <bits/stdc++.h>
using namespace std;

vector<int> sortedArray(vector<int> &a, vector<int> &b)
{
    vector<int> res;
    int i = 0, j = 0;

    while (i < a.size() && j < b.size())
    {
        if (a[i] <= b[j])
        {
            if (res.empty() || res.back() != a[i])
            {
                res.push_back(a[i]);
            }
            if (a[i] == b[j])
            {
                j++;
            }
            i++;
        }
        else
        {
            if (res.empty() || res.back() != b[j])
            {
                res.push_back(b[j]);
            }
            j++;
        }
    }

    while (i < a.size())
    {
        if (res.empty() || res.back() != a[i])
        {
            res.push_back(a[i]);
        }
        i++;
    }

    while (j < b.size())
    {
        if (res.empty() || res.back() != b[j])
        {
            res.push_back(b[j]);
        }
        j++;
    }

    return res;
}

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    vector<int> b(k);

    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < k; i++)
        cin >> b[i];

    vector<int> res = sortedArray(a, b);

    for (int i = 0; i < res.size(); i++)
        cout << res[i] << " ";

    return 0;
}