#include <bits/stdc++.h>
using namespace std;

bool checkArmstrong(int n){
	//Write your code here
    int num=n, sum=0;
    string x = to_string(n);
	int power = x.length();
    while(num > 0) {
        int last_digit = num%10;
        sum += pow(last_digit, power);
        num/=10;
    }

    return sum == n;
}


int main() {
    int n;
    cin >> n;

    cout << checkArmstrong(n) << endl;
}