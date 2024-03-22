/*
 *
 **
 ***
 **
 *
 */

#include <iostream>
using namespace std;

void nStarDiamond(int n)
{
    // Write your code here.
    for (int i = 1; i <= n; i++)
    {

        for (int k = 0; k < i; k++)
        {
            cout << "*";
        }

        cout << endl;
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int k = 0; k < n - i - 1; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;

    nStarDiamond(n);

    return 0;
}
