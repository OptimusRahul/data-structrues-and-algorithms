    #include <bits/stdc++.h>
    using namespace std;

    bool isPossible(vector<int> v, int k, int mid) {
        int sum=0;
        for(int i=0; i<v.size(); i++) {
            sum += v[i]/mid;
            if(sum >= k) return true;
        }
        return false;
    }

    int main() {
        int t;
        cin >> t;

        while(t--) {
            int n, k;
            cin >> n >> k;

            vector<int> v;
            int max = 0;
            while(n--) {
                int a;
                cin >> a;
                v.push_back(a);
                if(max < a) max = a;
            }

            int low=0, high = max;
            int mid=0;
            while(low<high) {
                mid = (low+high)/2;
                if(isPossible(v, k, mid)) low = mid;
                else high = mid;
            }

            cout << low << endl;
        }
    }