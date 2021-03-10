#include <bits/stdc++.h>
using namespace std;

bool find(long curr, long k) {
    long sum = 0, n = curr;

    while(n > 0) {
        sum += min(k, n);
        n -= k;
        n -= (n / 10)
    }

    return 2*sum >= curr;
}

long bSearch(long n) {
    long ret = n/2, low = 1, high = n;
    while(low <= high) {
        long mid = (low + high) / 2
        if(find(n, mid)) {
            ret = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return mid;
}

int main() {
    long t;
    cin >> t;

    cout << bSearch(n) << endl;
}