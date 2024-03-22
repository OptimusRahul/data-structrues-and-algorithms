/*

 *         *
 * *     * *
 * * * * * *
 * *     * *
 *         *

*/

#include <iostream>
using namespace std;

void symmetry(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*" << " ";
        }

        for (int j = 1; j <= ((2 * n) - (2 * i)); j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << "*" << " ";
        }

        cout << endl;
    }

    int space = 2;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 1; j <= (n - i - 1); j++)
        {
            cout << "*" << " ";
        }

        for (int j = 0; j < space; j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= (n - i - 1); j++)
        {
            cout << "*" << " ";
        }

        space += 2;

        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;

    symmetry(n);
}