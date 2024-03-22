#include <bits/stdc++.h>
using namespace std;

bool isPalindromeHelper(int start, int end, string &str)
{
    if(start >= end/2) return true;
    if (str[start] != str[end]) return false;
    return isPalindromeHelper(start + 1, end - 1, str);
}

bool isPalindrome(string &str)
{
    // Write your code here.
    return isPalindromeHelper(0, str.length() - 1, str);
}

int main()
{
    string s;
    cin >> s;

    if (isPalindrome(s))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }

    return 0;
}