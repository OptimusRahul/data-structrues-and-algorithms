#include <bits/stdc++.h>
using namespace std;

long merge(vector<int> v, int start, int mid, int end) {
    long sum = 0;

    long i = start, j=mid+1;

    while(i<=end && j<=end) {
        if(v.at(i) > v.at(j)) {
            sum += (end - j + 1)*v.at(i);
            i++;
        } else {
            j++;
        }
    }
    return sum;
}

long solve(vector<long> v, int start, int end) { 
    if(start >= end) {
        return 0;
    }

    int mid = (start + end) / 2;

    long sumLeft = solve(v, start, mid);
    long sumRight = solve(v, mid+1, end);

    sort(v.begin()+start, v.begin()+mid+1);
    sort(v.begin()+mid+1, v.begin()+end+1);

    long sum = merge(v, start, mid, end);

    return (sumLeft + sumRight + sum);
}

int main() {
    long long t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<int> v;
        while(n--) {
            long a;
            cin >> a;
            v.push_back(a);
        }
    }
}

// 1 5 3 6 4
// 0 
// 1
// 1
// 1 + 5 + 3
// 1 + 3