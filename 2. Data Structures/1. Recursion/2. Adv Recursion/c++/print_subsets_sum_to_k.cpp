#include <iostream>
using namespace std;

void printSubsetSumToKHelper(int input[], int size, int k, int output[], int m) {
    if(size == 0) {
        if(k == 0) {
            for(int i=0; i<m; i++) {
                cout << output[i] << " ";
            }
            cout << endl;
        }
        return;
    }

    int smallOutput[m+1];

    printSubsetSumToKHelper(input+1, size-1, k, output, m);

    int x = 0;
    for(int i=0; i<m; i++) {
        smallOutput[x++] = output[i];
    }

    smallOutput[x] = input[0];
    printSubsetSumToKHelper(input+1, size-1, k-input[0], smallOutput, m+1);
}

void printSubsetSumToK(int input[], int size, int k) {
    int output[10000];
    printSubsetSumToKHelper(input, size, k, output, 0);
}

int main() {
    int input[1000], length, k;
    cin >> length;

    for(int i=0; i<length; i++) {
        cin >> input[i];
    }

    cin >> k;

    printSubsetSumToK(input, length, k);
}