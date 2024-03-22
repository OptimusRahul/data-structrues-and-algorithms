#include <bits/stdc++.h>
using namespace std;

// [1, 2, 3, 1, 1, 1, 1] k = 3

int longestSubarrayWithSumK(vector<int> a, long long k) {
    int n = a.size();
    int len = 0;

    for(int i=0; i<n; i++) {
        int s = 0;
        for(int j=i; j<n; j++) {
            s+=a[j];
            // for(int k=i; k<=j; k++) {
            //     s+=a[k];
            // }

            if(s == k) {
                len = max(len, j-i+1);
            }
        }
    }

    return len;
}

int main()
{
    int n;
    long long k;
    cin >> n >> k;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << longestSubarrayWithSumK(arr, k) << endl;
}