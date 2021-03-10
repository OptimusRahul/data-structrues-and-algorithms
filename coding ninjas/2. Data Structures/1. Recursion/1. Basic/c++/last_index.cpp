#include <iostream>
using namespace std;

int lastIndex(int *input, int n, int x) {
    if(n < 0) return -1;
    if(input[n] == x) return n;
    return lastIndex(input, n-1, x);
}

int main() {
    int n;
    cin >> n;

    int *input = new int[n];
    for(int i=0; i<n; i++) {
        cin >> input[i];
    }

    int x;
    cin >> x;

    cout << input[n] << endl;

    cout << lastIndex(input, n, x) << endl;
}