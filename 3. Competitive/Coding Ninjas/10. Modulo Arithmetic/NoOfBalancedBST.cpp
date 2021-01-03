#include <bits/stdc++.h>
using namespace std;

int balancedBTs(int h) {
    if(h == 0 || h == 1) {
        return 1;
    }

    int mod = pow(10, 9)+7;
    int x = balancedBTs(h-1);
    int y = balancedBTs(h-2);

    long part1 = (long) x*x;
    long part2 = (long) 2*x*y;

    int ans1 = (int)(part1%mod);
    int ans2 = (int)(part2%mod);

    int ans = (ans1 + ans2)%mod;

    return ans;
}

int main() {
    int h;
    cin >> h;

    cout << balancedBTs(h) << endl;

    return 0;
}