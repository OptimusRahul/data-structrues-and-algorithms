#include <iostream>
using namespace std;

int subsetSumToKHelper(int input[], int start, int length, int output[][50], int k) {
    if(start == length) {
        if(k == 0) {
            output[0][0] = 0;
            return 1;
        }
        return 0;
    }
    

    int smallOutput1[1000][50], smallOutput2[1000][50];
    int s1 = subsetSumToKHelper(input, start+1, length, smallOutput1, k);
    int s2 = subsetSumToKHelper(input, start+1, length, smallOutput2, k-input[start]);

    int row = 0;
    for(int i=0; i<s1; i++) {
        for(int j=0; j<= smallOutput1[i][0]; j++) {
            output[row][j] = smallOutput1[i][j];
        }
        row++;
    }

    for(int i=0; i<s2; i++) {
        output[row][0] = smallOutput2[i][0] + 1;
        output[row][1] = input[start];
        for(int j=1; j<= smallOutput2[i][0]; j++) {
            output[row][j+1] = smallOutput2[i][j];
        }
        row++;
    }

    return row;
}

int subsetSumToK(int input[], int length, int output[][50], int k) {
    return subsetSumToKHelper(input, 0, length, output, k);
}

int main() {
    int input[20], length, output[10000][50], k;
    cin >> length;

    for(int i=0; i<length; i++) {
        cin >> input[i];
    }

    cin >> k;

    int size = subsetSumToK(input, length, output, k);

    for(int i=0; i<size; i++) {
        for(int j=1; j <= output[i][0]; j++) {
            cout << output[i][j] << " ";
        }
        cout << endl;
    }
}