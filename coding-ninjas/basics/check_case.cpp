/*
Write a program that takes a character as input and prints either 1, 0 or -1 according to the following rules.
1, if the character is an uppercase alphabet (A - Z)
0, if the character is a lowercase alphabet (a - z)
-1, if the character is not an alphabet
*/

#include <iostream>
using namespace std;

int main() {
	#ifndef ONLINE_JUDGE
		freopen("../../input.txt", "r", stdin);
		freopen("../../output.txt", "w", stdout);
	#endif

		char ch;
		cin >> ch;

		int ascii = (int)ch;

		if(ascii >= 65 && ascii<= 90) {
			cout << "1" << endl;
		} else if(ascii >= 97 && ascii <= 122) {
			cout << "0" << endl;	
		} else {
			cout << "-1" << endl;
		}

	return 0;
}
