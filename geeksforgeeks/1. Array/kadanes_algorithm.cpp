#include <iostream>
using namespace std;

int maxSubArray(int arr[], int n) {
    int maxSoFar = 0, maxEndingHere = 0;

    for(int i=0; i<n; i++) {
        maxEndingHere += arr[i];

        if(maxEndingHere < 0) {
            maxEndingHere = 0;
        } else if(maxSoFar < maxEndingHere) {
            maxSoFar = maxEndingHere;
        }
    }
    
    return maxSoFar;
}

int main() {
    int arr[] = {1, 2, 3, -2, 5};
    cout << maxSubArray(arr, 5) << endl;
    return 0;
}