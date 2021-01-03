#include <iostream>
using namespace std;

void helper(int *input, int start, int n, int x, int output[], int &k) {
    if(start == n) return;
    if(input[start] == x) {
        output[k] = k;
        k++;
    }
    helper(input, start + 1, n, x, output, k);
}

int allIndiciesOfNumber(int *input, int n, int x, int *output) {
    int k = 1;
    helper(input, 0, n, x, output, k);
    return k;
}

int main() {
    int n;
    cin >> n;

    int *input = new int[n];
    for(int i=0; i<n; i++) {
        cin >> input[i];
    }

    int x;
    cin >> x;

    int *output = new int[n];

    int size = allIndiciesOfNumber(input, n, x, output);

    for(int i=0; i<size; i++) {
        cout << output[i] << " ";
    }
    
    cout << endl;

    delete [] output;
    delete [] input;
}