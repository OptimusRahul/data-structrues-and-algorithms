#include <bits/stdc++.h>
using namespace std;

int count_digits_log(int n)
{
    return floor(log10(n) + 1);
}

int count_digits_str(int n)
{
    string x = to_string(n);
    return x.length();
}

// O(n)
int count_digits(int n)
{
    int num = n, count = 0;
    while (num > 0)
    {
        count++;
        num /= 10;
    }

    return count;
}

int main()
{
    int n;
    cin >> n;

    cout << count_digits(n) << endl;
    cout << count_digits_str(n) << endl;
    cout << count_digits_log(n) << endl;
}