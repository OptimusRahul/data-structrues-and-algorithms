/*
    A
  A B A
A B C B A
*/

#include <iostream>
using namespace std;

void alphaHill(int n)
{
    for (int i = 1; i <= n; i++)
    {
        char current_character = 'A';
        for (int j = ((n - i) * 2); j > 0; j--)
        {
            cout << " ";
        }

        for (int k = 0; k < i; k++)
        {
            cout << current_character << " ";
            current_character++;
        }

        if (i > 1)
        {
            current_character--;
            for (int j = 1; j < i; j++)
            {
                cout << (char)(current_character - j) << " ";
            }
        }

        for (int j = ((n - i) * 2); j > 0; j--)
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

    alphaHill(n);
}