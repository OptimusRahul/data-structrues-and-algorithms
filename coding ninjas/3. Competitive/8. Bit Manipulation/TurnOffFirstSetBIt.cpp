#include <bits/stdc++.h>
using namespace std;

int turnOffTheFirstSetBit(int n) {
    return n^(n & (-n));
}

int main() {
    int n;
    cin >> n;

    cout << turnOffTheFirstSetBit(n) << endl;

    return 0;
}