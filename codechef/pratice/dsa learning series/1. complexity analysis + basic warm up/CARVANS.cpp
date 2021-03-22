#include <iostream>
using namespace std;

int main() {
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);

		freopen("output.txt", "w", stdout);

	#endif

	int t; cin >> t;

	while(t--) {
		int n; cin >> n;

		int speed[n];
		for(int i=0; i<n; i++) cin >> speed[i];

		int max_car_speed = 1;

		if(n == 1) {
			cout << max_car_speed << endl;
		} else {
			int i, j;
			for(i=1; i<n;) {
				bool flag = false;
				for(j=i; j<n; j++) {
					if(speed[j] < speed[j+1]){
						flag = true;
					} else {
						break;
					}
				}

				i+=j;
				if(flag) {
					max_car_speed++;
				}
			}

			cout << max_car_speed << endl;
		}
	}

	return 0;
}