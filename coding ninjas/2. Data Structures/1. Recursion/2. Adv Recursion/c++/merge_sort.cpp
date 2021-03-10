#include <iostream>
using namespace std;

void merge(int *input, int start, int mid, int end) {
    int i, j, k;
    int sizeL = mid - start + 1;
    int sizeR = end - mid;

    int L[sizeL], R[sizeR];

    for(i=0; i<sizeL; i++) L[i] = input[start + i];
    for(j=0; j<sizeR; j++) R[j] = input[mid + 1 + j];

    i=0;
    j=0;
    k=start;

    while(i<sizeL && j<sizeR) {
        if(L[i] <= R[j]) {
            input[k++] = L[i++];
        } else {
            input[k++] = R[j++];
        }
    }

    while(i < sizeL) input[k++] = L[i++];
    while(j < sizeR) input[k++] = R[j++];
}

void mergeSortHelper(int *input, int start, int end) {
    if(start < end) {
        int mid = (start+end)/2;
        mergeSortHelper(input, start, mid);
        mergeSortHelper(input, mid+1, end);
        merge(input, start, mid, end);
    }
}

void mergeSort(int *input, int length) {
    mergeSortHelper(input, 0, length-1);
}

int main() {
    int length;
    cin >> length;

    int* input = new int[length];
    for(int i=0; i<length; i++) {
        cin >> input[i];
    }

    mergeSort(input, length);

    for(int i=0; i<length; i++) {
        cout << input[i] << " ";
    }

    cout << endl;
    return 0;
}