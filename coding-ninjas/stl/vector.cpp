#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;

    // pushing data in vector
    for(int i=1; i<=5; i++) {
        v.push_back(i);
    }

    // different operations of vector
    cout << "Output of begin and end: ";
    for(auto i = v.begin(); i != v.end(); ++i) {
        cout << * i << " ";
    }

    // pop one element
    v.pop_back();

    cout << "\n Output after pop: ";
    for(auto i = v.begin(); i != v.end(); ++i) {
        cout << * i << " ";
    }

    cout << "\n Output of rbegin and rend: ";
    for(auto ir = v.rbegin(); ir != v.rend(); ++ir) {
        cout << * ir << " ";
    }

    cout << "\n Output of crbegin and crend";
    for(auto ir = v.crbegin(); ir != v.crend(); ++ir) {
        cout << * ir << " ";
    }

    return 0;
}