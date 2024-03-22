#include<bits/stdc++.h>
using namespace std;

long long merge(long long *arr, int left, int mid, int right) {
    int i=left, j=mid, k=0;
    int temp[right-left+1];
    long long count = 0;

    while(i<mid && j<=right) {  
        if(arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
            count += mid-i;
        }
    }

    while(i<mid) {
        temp[k++] = arr[i++];
    }

    while(j<=right) {
        temp[k++] = arr[j++];
    }

    for(int i=left, k=0; i<=right; i++, k++) {
        arr[i] = temp[k];
    }

    return count;
}

long long getInversionHelper(long long *arr, int left, int right) {
    if(left < right) {
        int mid = (left + right) / 2;

        long long countLeft = getInversionHelper(arr, left, mid);
        long long countRight = getInversionHelper(arr, mid + 1, right);
        long long myCount = merge(arr, left, mid+1, right);

        return (countLeft + countRight + myCount);
    }

    return 0;
}

long long getInversion(long long *arr, int n) {
    return getInversionHelper(arr, 0, n);

}

int main() {
    int n;
    cin >> n;

    long long *arr = new long long[n];

    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    cout << getInversion(arr, n);

    delete arr;
}