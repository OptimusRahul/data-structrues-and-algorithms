#include <bits/stdc++.h>
using namespace std;

void totalMiles(int input[], int n) {
    long long int total_miles = 0;
    for(int i = 0; i < n; i++) {
        total_miles += pow(2, i) * input[n-1-i];
    }

    cout << total_miles << endl;
}

int main() {
    int size;
    cin >> size;

    int *input = new int[1 + size];

    for(int i=0; i < size; i++){
        cin >> input[i];
    }

    sort(arr, arr+n);
    totalMiles(input, size);
}