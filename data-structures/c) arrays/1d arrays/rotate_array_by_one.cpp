#include <bits/stdc++.h>
using namespace std;

vector<int> rotateArray(vector<int>& arr, int n) {
    // Write your code here.
    int top = arr[0];
    for(int i=1; i<n; i++) {
        arr[i-1] = arr[i];
    }
    arr[n-1] = top;

    return arr;
}


int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i=0; i<n; i++) cin >> arr[i];

    for(int i=0; i<n; i++) cout << arr[i] << " ";
    cout << endl;

    rotateArray(arr, n);

    for(int i=0; i<n; i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}