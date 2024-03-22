#include <bits/stdc++.h>
using namespace std;

int reverse_loop(int n)
{
    int num = n, rev = 0;
    while (num > 0)
    {
        int lastDigit = num % 10;
        rev = (rev * 10) + lastDigit;
        num /= 10;
    }

    return rev;
}

int main()
{
    int n;
    cin >> n;

    cout << reverse_loop(n) << endl;
}