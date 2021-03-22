#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t-- > 0) {
		int n;
		cin >> n;

		int arr[n];
		for(int i=0; i<n; i++){
			cin >> arr[i];
		}

		sort(arr, arr+n);
		
		int count = 0;
		bool flag = false;
		for(int i=0; i<n; i++) {
			if( ( i + 1 ) - arr[i] < 0 ){
				flag = true;
				break;
			}
			count = count + ( ( i + 1) - arr[i] );
		}
		if(flag) {
			cout << "Second" << endl;
		} else {

			if(abs(count) % 2 == 0) {
				cout << "Second" << endl;
			}
			else {
				cout << "First" << endl;
			}
		}
	}
	return 0;
}
