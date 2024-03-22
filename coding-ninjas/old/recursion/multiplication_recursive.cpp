#include <iostream>
using namespace std;

int multiplyNumbers(int m, int n) {
    if(m == 0 || n == 0) {
        return 0;
    } else if(m < n) {
        return multiplyNumbers(n, m);
    } else {
        return m + multiplyNumbers(m, n-1);
    }
}

int main() {
    int m, n;
    cin >> m >> n;

    cout << multiplyNumbers(m, n) << endl;
}