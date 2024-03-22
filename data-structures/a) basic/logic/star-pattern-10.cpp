/*

****
*  *
*  *
****

*/

#include <iostream>
using namespace std;

void getStarPattern(int n)
{
    // Write your code here.
    for (int i = 0; i < n; i++)
    {

        // first and last row
        if (i == 0 || i == n - 1)
        {
            for (int j = 0; j < n; j++)
            {
                cout << "*"
                     << " ";
            }
        }
        else
        {
            for (int j = 0; j < n; j++)
            {
                if (j == 0 || j == (n - 1))
                {
                    cout << "*"
                         << " ";
                }
                else
                {
                    cout << " ";
                }
            }
        }

        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;

    getStarPattern(n);
}