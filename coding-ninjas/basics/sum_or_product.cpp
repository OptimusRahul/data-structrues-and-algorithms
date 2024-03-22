#include <iostream>
using namespace std;

int main() {
	#ifndef ONLINE_JUDGE
		freopen("../../input.txt", "r", stdin);
		freopen("../../output.txt", "w", stdout);
	#endif

	int n,c;
	cin >> n >> c;

	int sum=0, product=1, i=1;

	switch(c) {
		case 1:
			for(; i<=n; i++) {
				sum+=i;
			}
			cout << sum;
			break;

		case 2:
			for(; i<=n; i++) {
				product*=i;
			}
			cout << product;
			break;

		default:
			cout << "-1";
	}

	return 0;

}