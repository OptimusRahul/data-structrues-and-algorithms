#include <iostream>
#include <string>
using namespace std;

int returnPermutations(string input, string output[]) {
    if(input.length() == 0) {
        output[0] = "";
        return 1;
    }

    int i, j, k=0, smallResult;
    string smallOutput[10000];
    
    for(i=0; i<input.length(); i++) {
        smallResult = returnPermutations(input.substr(0, i) + input.substr(i+1), smallOutput);
        for(int j=0; j<smallResult; j++) {
            output[k] = input[i] + smallOutput[j];
            k++;
        }
    }

    return input.length() * smallResult;
}

int main() {
    string input;
    cin >> input;

    string output[10000];
    int count = returnPermutations(input, output);
    for(int i=0; i<count && i<10000; i++) {
        cout << output[i] << endl;
    }

    return 0;
}