#include <iostream>
using namespace std;

// [ 1, 3, 5, 2, 2]
// 1 + 3 + 5 + 2 + 2 = 13 (13 is rightMost sum)
// leftSum = 0;
/**
 * 
 * temp = 13 - 1
 * leftSum == temp
 * 
 * left += arr[i]; 
 * 
 * */

class Solution {
    public:
        int equilibriumPointOn2(long long arr[], int n) {
            int i, j, k;
            int leftSum, rightSum;

            for(i = 0; i < n; i++) {
                leftSum = 0;
                for(j = 0; j < i; j++) {
                    leftSum += arr[j];
                }

                rightSum = 0;
                for(k = i + 1; k < n; i++) {
                    rightSum+= arr[k];
                }

                if(leftSum == rightSum)
                    return i+1;
            }

            return -1;
        }

        int equilibriumPointOn(long long arr[], int n) {
            int rightSum, leftSum = 0;

            for(int i=0; i<n; i++) {
                rightSum += arr[i];
            }

            for(int i=0; i<n; i++) {
                rightSum -= arr[i];

                if(leftSum == rightSum) {
                    return i+1;
                }

                leftSum += arr[i];
            }

            return -1;
        }
};

int main() {
    long long t;
    cin >> t;

    while(t--) {
        long long n;
        cin >> n;

        long long input[n];

        for(long long i = 0; i < n; i++) 
            cin >> input[i];

        Solution obj;

        cout << obj.equilibriumPointOn2(input, n) << endl;
    }
    return 0;
}