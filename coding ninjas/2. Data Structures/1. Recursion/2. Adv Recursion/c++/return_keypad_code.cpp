#include <iostream>
#include <string>
using namespace std;

const string keypadChars[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

int keypad(int num, string output[]) {
	if(num == 0) {
		output[0] = "";
		return 1;
	}

	int lastDigit = num%10; // 3 -> 2
	int remainingDigit = num/10; // 2 -> 0
	
	string smallOutput[500];
	int smallCount = keypad(remainingDigit, smallOutput); // 1 -> 3
	string currentCharacter = keypadChars[lastDigit]; // "abc" -> "def"

	int k = 0;
	
	for(int i=0; i<currentCharacter.length(); i++) {
		for(int j=0; j<smallCount; j++) {
			output[k++] = smallOutput[j] + currentCharacter[i] ; //['a', 'b', 'c'] -> ['a', 'b', 'c'] x ['d','e','f']
		}
	}

	return k;
}

int main() {
	int num;
	cin >> num;
	
	string output[10000];
	int count = keypad(num, output);
	for(int i=0; i<count; i++) {
		cout << output[i] << endl;
	}
	return 0;
}
