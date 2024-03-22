/*
C
C B 
C B A
*/

#include <iostream>
using namespace std;

void alphaTriangle(int n) {
    for (int i=0; i<n; i++) {
        char current_character = (char)(65+n-1);
        for(int j=0; j<=i; j++) {
            cout << current_character << " ";
            current_character--;
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;

    alphaTriangle(n);
}