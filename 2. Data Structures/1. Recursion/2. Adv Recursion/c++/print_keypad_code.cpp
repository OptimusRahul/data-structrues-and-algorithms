#include <iostream>
#include <string>
using namespace std;

string const keypadChars[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

void helper(int num, string output) {
    if(num == 0) {
        cout << output << endl;
        return ;
    }

    int lastDigit = num%10;
    int remainingDigit = num/10;

    string smallOutput = keypadChars[lastDigit];

    for(int i=0; i<smallOutput.length(); i++) {
        output = smallOutput[i] + output;
        helper(remainingDigit, output);
        output = output.substr(1);
    }
}

void keypad(int num) {
    string output = "";
    helper(num, output);
}

int main() {
    int num;
    cin >> num;

    keypad(num);

    return 0;
}