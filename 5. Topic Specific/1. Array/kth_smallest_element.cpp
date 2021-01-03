#include <bits/stdc++.h>
using namespace std;

int kthSmallest(int *, int, int, int);

int main() {
    int test_case;
    cin >> test_case;

    while(test_case--) {
        int number_of_elements;
        cin >> number_of_elements;

        int a[number_of_elements];
        for(int i=0; i<number_of_elements; i++) {
            cin >> a[i];
        }

        int k;
        cin >> k;
        cout << kthSmallest(a, 0, number_of_elements-1, k) << endl;
    }

    return 0;
}

int kthSmallest(int arr[], int l, int r, int k) {
    // if(l > r) return -1;
    // if(l == r) return arr[0];

    int smallest = arr[0];
    for(int i=1; i<r; i++) {
        if(k==0) break;
        if(smallest > arr[i]) {
            //smallest = arr[i];
            k--;
        } else {
            smallest = arr[i];
        }

        cout << smallest << " ";
    }

    return smallest;
}