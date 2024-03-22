/*
1
1 2 
1 2 3
*/

#include <iostream>
using namespace std;

void nForest(int n) {
	// Write your code here.
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            cout << j << " ";
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
