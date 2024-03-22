#include <bits/stdc++.h>
using namespace std;

void helper(int start, int end, vector<int> &res)
{
    res.push_back(start);
    if (start == end)
        return;
    return helper(start + 1, end, res);
}

vector<int> printNos(int n)
{
    vector<int> res;
    helper(1, n, res);
    return res;
}

int main()
{
    int n;
    cin >> n;
    
    vector<int> numbers = printNos(n);
    cout << "Numbers from 1 to " << n << " are: ";
    for (int i = 0; i < numbers.size(); ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}