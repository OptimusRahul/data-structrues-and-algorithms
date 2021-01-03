#include <iostream>
using namespace std;

bool checkAB(char input[]) {
    char *t = input;
    if(*input == '\0') return true;
    if(*input == 'a') {
        if(*(t+1) == 'a') return checkAB(input+1);
        else if(*(t+1) == 'b') return checkAB(input+1);
        else if(*(t+1) == '\0') return true;
    } else if(*input == 'b') {
        if(*(t+1) == 'b' && *(t+2) == 'a') return checkAB(input+2);
        else if(*(t+1) == 'b' && *(t+2) == '\0') {
            if(*(t-1) == 'a') return true;
            else return false;
        }
        else return false;
    }
}

int main() {
    char input[10];
    bool ans;
    cin >> input;
    ans = checkAB(input);
    if(ans) {
        cout << "true" << endl;
    } else  {
        cout << "false" << endl;
    }
}