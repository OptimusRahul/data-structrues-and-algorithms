#include <bits/stdc++.h>
using namespace std;

void printArray(string message, vector<int> arr) {
    cout << message << endl;
    for(int i=0; i<arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// O(k*n) O(1)
vector<int> rotateArray(vector<int> arr, int k) {
    // Write your code here.
    printArray("Input rotateArray", arr);
    int n = arr.size();
    while(k--) {
        int top = arr[0];
        for(int i=1; i<n; i++) {
            arr[i-1] = arr[i];
        }
        arr[n-1] = top;
    }

    return arr;
}

// O(n) O(n)
vector<int> rotateArrayOptimize(vector<int> arr, int k) {
    printArray("Input rotateArrayOptimize", arr);
    // Write your code here.
    int n = arr.size();
    vector<int> rotateArr(n);
    for(int i=0; i<n; i++) {
        rotateArr[(i-k+n)%n] = arr[i];
    }
    return rotateArr;
}

// void rotate(vector<int> &arr, int start, int end) {
//     while (start<=end)
//     {
//         swap(arr[start], arr[end]);
//         start++;
//         end--;
//     }
// }

vector<int> rotateArrayRecursive(vector<int> arr, int k) {
    printArray("Input rotateArrayRecursive", arr);

    int n = arr.size();
    k = (n-1)%k;

    reverse(arr.begin(), arr.end()-k-1);
    printArray("1st rev", arr);
    cout << endl;

    reverse(arr.end()-k-1, arr.end());
    printArray("2nd rev", arr);
    cout << endl;

    reverse(arr.begin(), arr.end());
    printArray("3rd rev", arr);
    cout << endl;

    return arr;
}



int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i=0; i<n; i++)  cin >> arr[i];

    int k;
    cin >> k;


    // vector<int> res = rotateArray(arr, k);
    // printArray("rotateArray", res);

    // vector<int> res1 = rotateArrayOptimize(arr, k);
    // printArray("rotateArrayOptimize", res1);

    vector<int> res2 = rotateArrayRecursive(arr, k);
    printArray("rotateArrayRecursive", res2);

    return 0;
}