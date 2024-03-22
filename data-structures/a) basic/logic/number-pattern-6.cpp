/*
1 2 3
1 2
1
*/

#include <iostream>
using namespace std;

void nForest(int n) {
	// Write your code here.
    for(int i=0; i<n; i++) {
        int k = 1;
        for(int j=n-i; j>0; j--) {
            cout << k << " ";
            k++;
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
