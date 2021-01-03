#include <bits/stdc++.h>
using namespace std;

int flipBit(int n, int i) {
    return n ^ (1 << i);
}

int main() {
    int n, i;
    cin >> n >> i;

    cout << flipBit(n, i) << endl;

    return 0;
}