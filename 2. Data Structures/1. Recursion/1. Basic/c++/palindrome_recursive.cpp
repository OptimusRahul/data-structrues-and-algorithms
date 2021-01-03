#include <iostream>
using namespace std;

int length(char input[]) {
    int size = 0;
    for(; input[size]!='\0'; size++){}

    return size;
}

bool helper(char input[], int start, int end) {
    if(start == end) return true;
    if(input[start] != input[end]) return false;
    if(start < end + 1) return helper(input, start + 1, end - 1);
    return true;
}

bool checkPalindrome(char input[]) {
    return helper(input, 0, length(input)-1);
}

int main() {
    char input[50];
    cin >> input;

    if(checkPalindrome(input)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}