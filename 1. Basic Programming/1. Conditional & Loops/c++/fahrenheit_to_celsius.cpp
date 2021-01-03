#include <iostream>
using namespace std;

int main() {
    int s, e, w;
    cin >> s >> e >> w;

    int cel;

    while(s <= e) {
        cel = (5*(s-32))/9;
        cout << s << "\t" << cel << endl;
        s = s + w;
    }
}