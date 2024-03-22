/*
A
B B
C C C
*/
#include <iostream>
using namespace std;

void nLetterTriangle(int n)
{
    for (int i = 0; i < n; i++)
    {
        char current_character = 'A';
        for (int j = (n - i); j > 0; j--)
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