#include <bits/stdc++.h>
using namespace std;

int setAllBitsFromMSB(int n, int i) {
    int m = (1 << i) - 1;
    return m&n;
}

int main() {
    int n, i;
    cin >> n >> i;

    cout << setAllBitsFromMSB(n, i) << endl;

    return 0;
}