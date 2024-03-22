/*
  *
 ***
*****
*****
 ***
  *
 */

#include <iostream>
using namespace std;

void nStarDiamond(int n)
{
    // Write your code here.
    for (int i = 1; i <= n; i++)
    {
        for (int j = n - i; j > 0; j--)
        {
            cout << " ";
        }

        for (int k = 0; k < (i * 2) - 1; k++)
        {
            cout << "*";
        }

        for (int j = n - i; j > 0; j--)
        {
            cout << " ";
        }

        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < ((n - i) * 2) - 1; k++)
        {
            cout << "*";
        }
        for (int j = 0; j < i; j++)
        {
            cout << " ";
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
