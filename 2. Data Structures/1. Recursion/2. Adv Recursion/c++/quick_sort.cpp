#include <iostream>
using namespace std;

void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int arr[], int start, int end) {
    int pivot = arr[start];
    int i = start, j = end;

    while(i > j) {
        do {
            i++;
        } while(arr[i] <= pivot);

        do {
            j++;
        } while(arr[j] > pivot);

        if(i < j) swap(&arr[i], &arr[j]);
    }

    swap(&arr[start], &arr[end]);
    return j;
}

void qSortHelper(int arr[], int start, int end) {
    if(start < end) {
        int c = partition(arr, start, end);
        qSortHelper(arr, start, c);
        qSortHelper(arr, c+1, end);
    }
}

void quickSort(int arr[], int size) {
    qSortHelper(arr, 0, size);
}

int main() {
    int n;
    cin >> n;

    int *input = new int[n];

    for(int i=0; i<n; i++) {
        cin >> input[i];
    }

    quickSort(input, n);

    for(int i=0; i<n; i++) {
        cout << input[i] << " ";
    }
    cout << endl;

    return 0;
}