/*
1         1
1 2     2 1
1 2 3 3 2 1
 */

#include <iostream>
using namespace std;

void numberCrown(int n)
{
    // Write your code here.
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << j + 1 << " ";
        }
        for (int space = 0; space < (n - i - 1) * 2; space++)
        {
            cout << " ";
        }
        for (int k = i; k >= 0; k--)
        {
            cout << k + 1 << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;

    numberCrown(n);

    return 0;
}
