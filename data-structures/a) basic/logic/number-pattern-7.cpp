/*
4444444
4333334
4322234
4321234
4322234
4333334
4444444
*/

#include <iostream>
using namespace std;

void getNumberPattern(int n)
{
    // Write your code here.
    int space = 2 * n - 3;
    int count = n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << (n - j);
        }

        for (int j = 0; j <= space; j++)
        {
            cout << count;
        }

        for (int j = i; j > 0; j--)
        {
            cout << (n - j + 1);
        }
        space -= 2;
        count--;

        cout << endl;
    }

    count=2;
    space = 1;

    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 0; j <=n - i - 1; j++)
        {
            cout << n - j;
        }

        for (int j = 0; j < space; j++)
        {
            cout << count;
        }

        for (int j = n - i - 1; j >=0; j--)
        {
            cout << n - j;
        }

        count++;
        space+=2;

        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;

    getNumberPattern(n);

    return 0;
}
