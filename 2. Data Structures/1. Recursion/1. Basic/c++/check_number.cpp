#include <iostream>
using namespace std;

bool checkNumber(int *input, int n, int x) {
    if(n == 0) return false;
    if(input[n-1] == x) return true;
    return checkNumber(input, n-1, x);
}

int main() {
    int n;
    cin >> n;

    int *input = new int[n];

    for(int i=0; i<n; i++) cin >> input[i];

    int x;
    cin >> x;

    if(checkNumber(input, n, x)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}