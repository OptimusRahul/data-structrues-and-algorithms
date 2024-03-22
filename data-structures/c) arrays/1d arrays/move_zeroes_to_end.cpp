#include <bits/stdc++.h>
using namespace std;

vector<int> moveZeros(int n, vector<int>& a) {
    // Write your code here.

    int j = 0; // Pointer to place non-zero elements
    for (int i = 0; i < n; i++) {
        if (a[i] != 0) {
            // Swap non-zero element with element at index j
            swap(a[i], a[j]);
            j++;
        }
    }
    return a;

    // vector<int> res;
    // int zero_count = 0;
    // for(int i=0; i<n; i++) {
    //     if(a[i] == 0) {
    //         zero_count++;
    //     } else {
    //         res.push_back(a[i]);
    //     }
    // }

    // while(zero_count--) {
    //     res.push_back(0);
    // }

    // return res;
}


int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i=0; i<n; i++) cin >> arr[i];

    for(int i=0; i<n; i++) cout << arr[i] << " ";
    cout << endl;

    vector<int> res = moveZeros(n, arr);

    for(int i=0; i<n; i++) cout << res[i] << " ";
    cout << endl;
}