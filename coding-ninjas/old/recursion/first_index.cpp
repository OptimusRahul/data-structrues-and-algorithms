#include <iostream>
using namespace std;

int firstIndex(int *input, int n, int x) {
    if(n < 0) { return -1; }
    else if(input[0] == x) return 0;
    int ans = firstIndex(input+1, n-1, x);
    return ans == -1 ? ans : ans+1;
}

int main() {
    int n;
    cin >> n;

    int *input = new int[n];

    for(int i=0; i<n; i++) {
        cin >> input[i];
    }

    int x;
    cin >> x;

    cout << firstIndex(input, n, x) << endl;
}