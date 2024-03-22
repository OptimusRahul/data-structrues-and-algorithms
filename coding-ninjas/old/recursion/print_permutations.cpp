#include <iostream>
#include <string>
using namespace std;

void printPermutationsHelper(string input, string output) {
    if(input.empty()) {
        cout << output << endl;
        return;
    }

    string smallOutput;
    for(int i=0; i<input.length(); i++) {
        printPermutationsHelper(input.substr(0, i) + input.substr(i+1), output + input[i]);
    }
}

void printPermutations(string input) {
    string output = "";
    printPermutationsHelper(input, output);
}

int main() {
    string input;
    cin >> input;
    printPermutations(input);
    return 0;
}