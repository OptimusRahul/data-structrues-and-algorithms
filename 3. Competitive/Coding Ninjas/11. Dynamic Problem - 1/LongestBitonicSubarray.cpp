#include <bits/stdc++.h>
using namespace std;

int longestBitonicSubarray(int *input, int n) {
    int i, j;

    int *lis = new int[n];

    for(i=0; i<n; i++) {
        lis[i] = 1;
    }

    for(i=1; i<n; i++) {
        for(j=0; j<i; j++) {
            if(input[i] > input[j] && lis[i] < lis[j] + 1) {
                lis[i] = lis[j]+1;
            }
        }
    }

    int *lds = new int[n];

    for(i=0; i<n; i++) {
        lds[i] = 1;
    }

    for(i=n-2; i>=0; i--) {
        for(j = n-1; j>i; j--) {
            if(input[i] > input[j] && lds[i] < lds[j] + 1) {
                lds[i] = lds[j] + 1;
            }
        }
    }

    int max = lis[0] + lds[0] - 1;
    for(int i=1; i<n; i++) {
        if(lis[i]+lis[i]-1 > max) {
            max = lis[i] + lds[j] - 1
        }
    }

    return max;
}

int main() {
    int n, input[100000];
    cin >> n;

    for(int i=0; i<n; i++) {
        cin >> input[i];
    }

    cout << longestBitonicSubarray(input, n);

    return 0;
}