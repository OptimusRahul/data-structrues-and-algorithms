#include <bits/stdc++.h>
using namespace std;

int main() {
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);

		freopen("output.txt", "w", stdout);

	#endif

		int n; cin >> n;
		long long price[n];

		for(int i=0; i<n; i++) {
			cin >> price[i];
		}

		long long ans = LONG_MIN;

		sort(price, price+n);
		for(int i=0; i<n; i++) {
			ans = max(ans, price[i] * (n-i));
		}

		cout << ans << endl;

	return 0;
}