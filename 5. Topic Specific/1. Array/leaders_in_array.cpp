#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        vector<int> leadersUnoptimized(int arr[], int n) {
            vector<int> ans;

            for(int i=0; i<n; i++) {
                int currElement = arr[i];
                bool found = true;

                for(int j=i+1; j<n; j++) {
                    if(currElement <  arr[j]) {
                        found = false;
                        break;
                    } 
                }

                if(found) {
                    ans.push_back(currElement);
                }
            }

            return ans;
        }

        vector<int> leadersOptimized(int arr[], int n) {
            vector<int> ans;
            int maxFromRight = arr[n-1];

            ans.push_back(maxFromRight);
            
            for(int i = n-2; i > 0; i--) {
                if(maxFromRight <= arr[i]) {
                    maxFromRight = arr[i];
                    ans.push_back(maxFromRight);
                } 
            }

            reverse(ans.begin(), ans.end());

            return ans;
        }
};

int main() {
    long long t;
    cin >> t;

    while(t--) {
        long long n;
        cin >> n;

        int arr[n];

        for(long long i=0; i<n; i++) {
            cin >> arr[i];
        }

        Solution obj;

        vector<int> v = obj.leadersUnoptimized(arr, n);

        for(auto it = v.begin(); it!=v.end(); it++) {
            cout << *it << " ";
        }

        cout << endl;

        vector<int> v1 = obj.leadersOptimized(arr, n);

        for(auto it = v1.begin(); it!=v1.end(); it++) {
            cout << *it << " ";
        }

        cout << endl;
    }

    return 0;
}