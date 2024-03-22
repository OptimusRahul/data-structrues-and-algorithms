#include <bits/stdc++.h>
using namespace std;

int isSorted(int n, vector<int> &arr) {
    int sorted = 1;
    for(int i=0; i<n-1; i++) {
        if(arr[i] > arr[i+1]) {
            return 0;
        }
    }

    return sorted;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i=0; i<n; i++) cin >> arr[i];

    cout << isSorted(n, arr) << endl;

    return 0;
}