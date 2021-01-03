#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, n;
    cin >> x >> n;

    long power = 1;
    for(int i=1; i<=n; i++) {
        power *= n;
    }

    cout << power << endl;
}