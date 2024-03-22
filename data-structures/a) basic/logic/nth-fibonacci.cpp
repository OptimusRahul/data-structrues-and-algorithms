#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a = 0, b = 1;
    int nth_fib = 1;

    for (int i = 1; i < n; i++) {
        nth_fib = b + a;
        a = b;
        b = nth_fib;
    }

    cout << nth_fib << endl;
    return 0;
}