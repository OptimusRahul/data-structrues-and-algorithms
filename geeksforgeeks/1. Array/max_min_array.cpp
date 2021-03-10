// Find Minimum and Maximum element in minimum number of steps

#include <iostream>
using namespace std;

struct Pair {
    int min;
    int max;
};

// Using Linear Seacrh Approach

struct Pair getMinMax(int *arr, int n) {
    struct Pair minmax;
    int i;

    if(n == 1) {
        minmax.min = arr[0];
        minmax.max = arr[0];

        return minmax;
    }

    if(arr[0] > arr[1]) {
        minmax.min = arr[1];
        minmax.max = arr[0];
    } else {
        minmax.min = arr[0];
        minmax.max = arr[1];
    }

    for(i=2; i<n; i++) {
        if(arr[i] > minmax.max) {
            minmax.max = arr[i];
        } else if(arr[i] < minmax.min) {
            minmax.min = arr[i];
        }
    }

    return minmax;
}

// Using Tournament Method

struct Pair getMinMaxTourNament(int *arr, int low, int high) {
    struct Pair minmax, minmaxleft, minmaxright;
    int mid;

    if(low == high) {
        minmax.min = arr[low];
        minmax.max = arr[low];
        return minmax;
    }

    if(high == low+1) {
        if(arr[low] > arr[high]) {
            minmax.min = arr[high];
            minmax.max = arr[low];
        } else {
            minmax.min = arr[low];
            minmax.max = arr[high];
        }
        return minmax;
    }

    mid = (low+high) / 2;
    minmaxleft = getMinMaxTourNament(arr, low, mid);
    minmaxright = getMinMaxTourNament(arr, mid+1, high);

    if(minmaxleft.min < minmaxright.min) {
        minmax.min = minmaxleft.min
    } else {
        minmax.min = minmaxright.min;
    }

    if(minmaxleft.max > minmaxright.max){
        minmax.max = minmaxleft.max;
    } else {
        minmax.max = minmaxright.max;
    }

    return minmax;
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    struct Pair minmax = getMinMax(arr, n);

    cout << minmax.min << endl;
    cout << minmax.max << endl; 
}