#include <bits/stdc++.h>
using namespace std;

// 6 3
// 0 1 0 0 1 0


// two pointer or sliding window

int traffic(int n, int m, vector<int> vehicle)
{
    // Write your code here.
    int right=0, count=0, ans=0;

    for(int left=0; left<n; left++) {
        while(right < n && count <= m) {
            if(vehicle[right] == 0) {
                count++;
            }
            if(count > m) {
                count--;
                break;
            }
            right++;
        }

        ans = max(ans, right-left);
        if(vehicle[left] == 0) {
            count--;
        }
    }

    return ans;
}

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << traffic(n, k, arr) << endl;
}