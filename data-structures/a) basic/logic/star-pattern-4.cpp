/*
  *
 ***
*****
 */

#include <iostream>
using namespace std;

void nStarTriangle(int n)
{
    // Write your code here.
    for (int i = 1; i <=n; i++)
    {
        for (int j = n - i; j > 0; j--)
        {
            cout << " ";
        }

        for (int k = 0; k < (i*2)-1; k++)
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

    nStarTriangle(n);

    return 0;
}
