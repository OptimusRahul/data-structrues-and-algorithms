#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.
    int idx=0;
    for(int i=1; i<n; i++) {
        if(arr[i] != arr[idx]) {
            arr[idx+1] = arr[i];
            idx++;
        }
    }

    return idx+1;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i=0; i<n; i++) cin >> arr[i];

    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int idx = removeDuplicates(arr, n);

    for(int i=0; i<idx; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}