#include <bits/stdc++.h>
using namespace std;

long ans = LONG_MAX;

long solve(long n, long e, long h, long a, long b, long c) {
	if(n <= 0) {
		return 0;
	}

	if(n<=e && n<=h) {
		ans = min(ans, n*c);
	}

	if(2*n <= e) {
		ans = min(ans, n*a);
	}

	if(n*3 <= h) {
		ans = min(ans, n*b);
	}

	if((h-n)/2 >= 1 && (h-n)/2 >= n-e) {
		long k;
		if(b-c < 0) {
			k = min(n-1, (h-n/2));
			ans = min(ans, (b-c)*k+n*c);
		} else {
			k = max((long)1, n-e);
			ans = min(ans, (b-c)*k+n*c);
		}
	}

	if((e-n)/2 >= 1 && (e-n)/2 >= n-e) {
		long k;
		if(a-c < 0) {
			k = min(n-1, (e-n));
			ans = min(ans, (a-c)*k+n*c);
		} else {
			k = max((long)1, n-h);
			ans = min(ans, (a-c)*k+n*c);
		}
	}

	if(e/2 >= 1 && e/2 >= (3*n-h+2)/3) {
		long k;
		if(a-b < 0) {
			k = min(n-1, (e/2));
			ans = min(ans, (a-b)*k+n*b);
		} else {
			k = max(1l, (3*n-h+2)/3);
			ans = min(ans, (a-b)*k+n*b);
		}
	}

	if(e>=3 && h>=4 && n>=3) {
		ans = min(ans, a+b+c+solve(n-3, e-3, h-4, a, b, c));
	}

	return ans;
}

int main() {
	long t;
	cin >> t;

	while(t--) {
		long n, e, h, a, b, c;
		cin >> n >> e >> h >> a >> b >> c;
		ans = LONG_MAX;
		long result = solve(n, e, h, a, b ,c);	

		if(result == LONG_MAX) {
			cout << -1 << endl;
		} else {
			cout << result << endl;
		}
	}
	return 0;
}


// long helper(int n, int e, int h, int a, int b, int c, int output[100][100]) {
// 	if(n == 0 || e <= 0 || h <= 0) {
// 		if(n == 0) {
// 			return 1;
// 		} else if(e <= 0 || h <= 0) {
// 			return 0;
// 		}
// 	}

// 	int smallO = helper(n-1, e-2, h, a, b, c, output);
// 	int smallC = helper(n-1, e, h-3, a, b, c, output);
// 	int smallS = helper(n-1, e-1, h-1, a, b, c, output);
	
// 	cout << smallO << smallC << smallS << endl;
// 	cout << endl;
// 	return 0;
// }
