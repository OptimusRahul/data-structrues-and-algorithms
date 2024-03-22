#include <bits/stdc++.h>
using namespace std;

// void helper(int n, vector<int> &res) {
//     if()
//     if(n==0) {
//         res.push_back(0);
//         return 0;
//     }

//     if(n==1) {
//         res.push_back(1);
//         return 1;
//     }

//     helper(n-1, res) + helper(n-2, res);
// }

// vector<int> generateFibonacciNumbers(int n)
// {
//     // Write your code here.
//     vector<int> res;
//     helper(n, res);
//     return res;

// }

// int fib(int n)
// {
//     if (n <= 1)
//         return n;
//     return fib(n - 1) + fib(n - 2);
// }

// vector<int> generateFibonacciNumbers(int n)
// {
//     // Write your code here.
//     vector<int> res;
//     for (int i = 0; i < n; i++)
//     {
//         res.push_back(fib(i));
//     }
//     return res;
// }

vector<int> generateFibonacciNumbers(int n)
{
    vector<int> fibonacci;

    if (n == 0)
    {
        fibonacci.push_back(0);
        return fibonacci;
    }

    if (n == 1)
    {
        fibonacci.push_back(0);
        fibonacci.push_back(1);
        return fibonacci;
    }

    fibonacci = generateFibonacciNumbers(n - 1);
    if (n >= 2) {
        fibonacci.push_back(fibonacci[n - 1] + fibonacci[n - 2]);
    }

    return fibonacci;
}

int main()
{
    int n;
    cin >> n;

    // cout << fib(n);

    vector<int> ans = generateFibonacciNumbers(n);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}