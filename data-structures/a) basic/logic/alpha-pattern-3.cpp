/*
A
B B
C C C
*/
#include <iostream>
using namespace std;

void alphaRamp(int n)
{
    char current_character = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << current_character << " ";
        }
        current_character++;
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;

    alphaRamp(n);
}