#include <bits/stdc++.h>
using namespace std;

int main() {
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);

		freopen("output.txt", "w", stdout);

	#endif

	int t; cin >> t;

	while(t--) {
		string input; cin >> input;

		int len = input.length();
		int start = 0, mid = len/2, end = len-1;
		if(len%2 != 0) {
			mid = mid+1;
		}

		bool flag = true;

		vector<char> left, right;

		while(start < len/2) {
			left.push_back(input[start]);
			start++;
		}

		while(mid < len) {
			right.push_back(input[mid]);
			mid++;
		}

		sort(left.begin(), left.end());
		sort(right.begin(), right.end());

		int i=0, j=0;

		while(i<left.size() && j<right.size()) {
			if(left[i] != right[j]) {
				flag = false;
				break;
			}
			i++;
			j++;
		}
		
		if(flag) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}

	return 0;
}