#include <bits/stdc++.h>
using namespace std;

void helper(int start, vector<int> &res)
{
    if (start == 0)
        return;
    res.push_back(start);
    return helper(start - 1, res);
}

vector<int> printNos(int n)
{
    vector<int> res;
    helper(n, res);
    return res;
}

int main()
{
    int n;
    cin >> n;

    vector<int> numbers = printNos(n);
    cout << "Numbers from 1 to " << n << " are: ";
    for (int i = 0; i < numbers.size(); ++i)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}