/*
A
A B
A B C
*/

#include <iostream>
using namespace std;

void nLetterTriangle(int n)
{
    for (int i = 0; i < n; i++)
    {
        char current_character = 'A';
        for (int j = 0; j <= i; j++)
        {
            cout << current_character << " ";
            current_character++;
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;

    nLetterTriangle(n);
}