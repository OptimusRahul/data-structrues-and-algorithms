#include <bits/stdc++.h>
using namespace std;

long long factorial(long long n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

vector<long long> factorialNumbers(long long n)
{
    // Write Your Code Here
    vector<long long> res;
    for (int i = 1; i <= n; i++)
    {
        long long fact = factorial(i);
        if (fact > n)
        {
            break;
        }
        res.push_back(fact);
    }

    return res;
}

int main()
{
    int n;
    cin >> n;

    // cout << factorial(n) << endl;

    vector<long long> res = factorialNumbers(n);
    for (int i=0; i<res.size(); i++)
    {
        cout << res[i] << " ";
    }
    cout << endl;
    return 0;
}