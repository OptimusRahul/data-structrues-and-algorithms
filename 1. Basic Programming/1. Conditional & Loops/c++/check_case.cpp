#include <iostream>
using namespace std;

int main() {
    char ch;
    cin >> ch;

    int ascii = (int) ch;

    if(ascii >= 65 && ascii <= 90) {
        cout << "1" << endl;
    } else if(ascii >= 97 && ascii <= 122) {
        cout << "0" << endl;
    } else {
        cout << "-1" << endl;
    }
}