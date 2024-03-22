#include <bits/stdc++.h>
using namespace std;

void helper(int n, vector<string> &res)
{
    if (n == 0)
        return;
    res.push_back("Coding Ninjas");
    return helper(n - 1, res);
}

vector<string> printNTimes(int n)
{
    // Write your code here.
    vector<string> res;
    helper(n, res);
    return res;
}

int main()
{
    int n;
    cin >> n;

    vector<string> numbers = printNTimes(n);
    for (int i = 0; i < numbers.size(); ++i)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}