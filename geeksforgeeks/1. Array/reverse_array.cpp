#include <iostream>
using namespace std;

void reverseArray(int *arr, int start, int end) {
    while(start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

void printArray(int arr[], int len) {
    for(int i=0; i<len; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    
    reverseArray(arr, 0, n-1);
    cout << printArray(arr, n) << endl;

    return 0;
}