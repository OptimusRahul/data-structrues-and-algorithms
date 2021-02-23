#include <iostream>
#include <cstring>
using namespace std;

int helper(char input[], int end) {
    if(end == 0) return input[end] - '0';
    int x = helper(input, end - 1);
    int y = input[end] - '0';
    return x*10+y;
}

int stringToNumber(char input[]) {
    return helper(input, strlen(input)-1);
}

int main() {
    char input[50];
    cin >> input;
    cout << stringToNumber(input) << endl;
}