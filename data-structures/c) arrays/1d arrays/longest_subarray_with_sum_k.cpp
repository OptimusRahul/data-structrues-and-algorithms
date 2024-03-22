#include <bits/stdc++.h>
using namespace std;

// [1, 2, 3, 1, 1, 1, 1] k = 3

int longestSubarrayWithSumK(vector<int> a, long long k)
{
    // int n = a.size(), maxLen = 0;

    // for(int i=0; i<n; i++) {
    //     long long sum = 0;
    //     for(int j=i; j<n; j++) {
    //         sum+=a[j];
    //         if(sum == k) {
    //             maxLen = max(maxLen, j-i+1);
    //         }
    //     }
    // }

    // return maxLen;

    int n = a.size(), maxLength = 0;
    int start = 0, end = -1;
    long long currentSum = 0;

    while (start < n)
    {
        while ((end + 1 < n) && (currentSum + a[end + 1] <= k))
        {
            currentSum += a[end + 1];
            ++end;
        }

        if (currentSum == k)
        {
            maxLength = max(maxLength, end - start + 1);
        }

        currentSum -= a[start];
        ++start;
    }

    return maxLength;

    
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