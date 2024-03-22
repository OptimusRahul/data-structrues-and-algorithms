/*
*****
 ***
  *
*/

#include <iostream>
using namespace std;

void nStarTriangle(int n)
{
    // Write your code here.
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
