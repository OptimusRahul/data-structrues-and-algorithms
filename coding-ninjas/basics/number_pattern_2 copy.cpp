#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int i=1;
    while(i <= n) {
        int space = n-i, j=1, k=i;
        while(space--) {
            cout << " ";
        }

        while(j<=i) {
            cout << k;
            k++;
            j++;
        }

        cout << endl;
        i++;
    }
}