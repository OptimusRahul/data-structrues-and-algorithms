#include <bits/stdc++.h>
using namespace std;

int linearSearch(int n, int num, vector<int> &arr) {
    for(int i=0; i<n; i++) {
        if(arr[i] == num) {
            return i;
        }
    }
    return -1;
}


int main() {
    int n , k;
    cin >> n >> k;

    vector<int> arr(n);
    for(int i=0; i<n; i++) cin >> arr[i];

    cout << linearSearch(n,k,arr) << endl;

    return 0;
}