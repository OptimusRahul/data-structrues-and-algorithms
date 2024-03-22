#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int sum = 0, start = 1;
    while(start <= n) {
        if(start % 2 == 0) sum += start;
        start++;
    }

    cout << sum;

    return 0;
}