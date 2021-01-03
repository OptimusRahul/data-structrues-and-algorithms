#include <iostream>
using namespace std;

int inputLength(char input[]) {
    int size = 0;
    while(input[size]!= '\0') { size++; }
    return size;
}

void helper(char input[], int start) {
    if(input[start] == '\0') return;
    helper(input, start+1);
    if(input[start] == 'p' && input[start + 1] == 'i') {
        for(int i = inputLength(input); i >= (start + 2); i--) {
            input[i+2] = input[i];
        }

        input[start] = '3';
        input[start+1] = '.';
        input[start+2] = '1';
        input[start+3] = '4';
    }
}

void replacePi(char input[]) {
    helper(input, 0);
}

int main() {
    char input[10000];
    cin.getline(input, 10000);
    replacePi(input);
    cout << input << endl;
}