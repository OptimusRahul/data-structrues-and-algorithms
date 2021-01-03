#include <iostream>
using namespace std;

int strlen(char s[]) {
    int size = 0;
    while(s[size] != '\0') size++;
    return size;
}

void helper(char s[], int start) {
    if(s[start] == '\0') return;
    helper(s, start+1);
    if(s[start] == s[start+1]) {
        for(int i=start; i<strlen(s); i++) {
            s[i] = s[i+1];
        }
    }
}

void removeConsecutiveDuplicates(char s[]) {
    helper(s, 0);
}

int main() {
    char s[100000];
    cin >> s;
    removeConsecutiveDuplicates(s);
    cout << s << endl;
}