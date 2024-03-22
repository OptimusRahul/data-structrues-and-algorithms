#include <iostream>
using namespace std;

int main() {
	#ifndef ONLINE_JUDGE
		freopen("../../input.txt", "r", stdin);
		freopen("../../output.txt", "w", stdout);
	#endif

	int n;
	cin >> n;

	int res = 0;
	while(n>0) {
		int lastNum = n%10;
		res = res * 10 + lastNum;
		n = n/10;
	}

	cout << res << endl;

	return 0;

}