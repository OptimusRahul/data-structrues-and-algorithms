#include <iostream>
using namespace std;

void helper(int *input, int length, int *output, int start) {
    // Base Case
    if(length == 0) {
        for(int i=0; i<start; i++) {
            cout << output[i] << " ";
        }
        cout << endl;
        return;
    }

    // Recursive call excluding output of the array
    helper(input+1, length-1, output, start);

    // Including the output of the program till now
    int k=0;
    int smallOutput[start+1];

    for(int i=0; i<start; i++) {
        smallOutput[k++] = output[i];
    }

    smallOutput[k] = input[0];

    //Recursive call including the output of the array
    helper(input+1, length-1, smallOutput, start+1);
}

void printSubsetOfArray(int *input, int length) {
    int *output = new int[1000];
    helper(input, length, output, 0);
}

int main() {
    int input[1000], length;
    cin >> length;

    for(int i=0; i<length; i++) {
        cin >> input[i];
    }

    printSubsetOfArray(input, length);
    return 0;
}