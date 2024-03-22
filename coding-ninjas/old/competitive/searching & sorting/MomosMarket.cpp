#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> shops, int low, int high, long money) {
    if(low > high) return -1;
    if(money >= shops[high]) return high;

    int mid = (low + high)/2;
    
    if(arr[mid] == money) return mid;
    if(mid > 0 && shops[mid] < money && shops[mid+1] > money) return mid;

    if(money < shops[mid]) {
        return solve(shops, low, mid-1, money);
    }

    return solve(shops, mid+1, high, money);
}

int main() {
    int total_shops;
    cin >> total_shops;

    vector<int> shops;
    vector<int> prefix;
    
    int temp=0;
    while(total_shops--) {
        int n;
        cin >> n;

        temp+=n;

        shops.push_back(n);
        prefix.push_back(temp);
    }

    int q;
    while(q--) {
        long money;
        cin >> money;

        int index = solve(prefix, money);
        long val = money;

        if(index != -1) {
            val -= prefix[index];
        }

        cout << index+1 << " " << val << endl;
    }
}