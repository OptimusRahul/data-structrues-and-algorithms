#include <iostream>
using namespace std;

int strlen (char input[]) {
    int size=0;
    while(input[size] != '\0') { size++; }
    return size;
}


void helper(char input[], int start) {
    if(input[start] == '\0') return;
    helper(input, start+1);
    if(input[start] == 'x') {
        for(int i=start; i<strlen(input); i++) {
            input[i] = input[i+1];
        }
    }
}

void removeX(char input[]) {
    helper(input, 0);
}

int main() {
    char input[10000];
    cin.getline(input, 10000);
    removeX(input);
    cout << input << endl;
}