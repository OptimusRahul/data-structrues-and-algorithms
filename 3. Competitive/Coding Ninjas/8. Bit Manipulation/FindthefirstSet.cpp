#include <bits/stdc++.h>
using namespace std;

int returnFirstSetBit(int n) {
    return n & (-1 * n);
}

int main() {
    int n;
    cin >> n;

    cout << returnFirstSetBit(n) << endl;
    
    return 0;
}