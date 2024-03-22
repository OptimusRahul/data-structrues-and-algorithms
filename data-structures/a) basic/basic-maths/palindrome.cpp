#include <bits/stdc++.h>
using namespace std;

bool palindrome(int n)
{
    // Write your code here
    int num = n, rev = 0;
    while (num > 0)
    {
        int last_digit = num % 10;
        rev = (rev * 10) + last_digit;
        num /= 10;
    }

    return n == rev;
}

int main()
{
    int n;
    cin >> n;

    cout << palindrome(n) << endl;
}