#include <bits/stdc++.h>
using namespace std;

int gcd_euclidean(int n, int m)
{
    int a = n, b = m;

    while (a > 0 && b > 0)
    {
        if (a > b)
            a = a % b;
        else
            b = b % a;
    }

    if (a == 0)
        return b;
    return a;
}

int gcd(int n, int m)
{
    int gc = 1;

    for (int i = 2; i <= min(n, m); i++)
    {
        if (n % i == 0 && m % i == 0)
        {
            gc = i;
        }
    }

    return gc;
}

int main()
{
    int n, m;
    cin >> n >> m;

    cout << gcd(n, m) << endl;
    cout << gcd_euclidean(n, m) << endl;

    return 0;
}