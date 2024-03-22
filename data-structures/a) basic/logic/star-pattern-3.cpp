/*
* * *
* *
*
*/

#include <iostream>
using namespace std;

void nForest(int n) {
	// Write your code here.
    for(int i=1; i<=n; i++) {
        for(int j=n-i; j>=0; j--) {
            cout << "*" << " ";
        }

        cout << endl;
    }
}


int main() {
    int n;
    cin >> n;

    nForest(n);

    return 0;
}
