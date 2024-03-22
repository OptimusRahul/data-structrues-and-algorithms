#include <iostream>
using namespace std;

int main() {
	#ifndef ONLINE_JUDGE	
		freopen("../../input.txt", "r", stdin);
		freopen("../../output.txt", "w", stdout);
	#endif

	int n;
	cin >> n;

	int count = 0, itr = 1;

	while(count < n) {
		int ap = (3*itr)+2;

		if(ap%4 != 0) {
			cout << ap << " ";
			count++;
		}

		itr++;
	}

}