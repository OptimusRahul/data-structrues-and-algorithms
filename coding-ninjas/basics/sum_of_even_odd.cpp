#include <iostream>
using namespace std;

int main() {
  #ifndef ONLINE_JUDGE
    freopen("../../input.txt", "r", stdin);
    freopen("../../output.txt", "w", stdout);
  #endif
  
  int n;
  cin >> n;

  int sumOfEven = 0, sumOfOdd = 0;
  while(n>0) {
    int currentNum = n%10;
    if(currentNum%2 == 0) {
      sumOfEven+=currentNum;
    } else {
      sumOfOdd+=currentNum;
    }
    n/=10;
  }

  cout << sumOfEven << " " << sumOfOdd << endl;

  return 0;
}
