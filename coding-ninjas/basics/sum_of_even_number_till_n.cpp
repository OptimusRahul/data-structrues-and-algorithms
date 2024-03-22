#include <iostream>
using namespace std;

int main() {
  #ifndef ONLINE_JUDGE
    freopen("../../input.txt", "r", stdin);
    freopen("../../output.txt", "w", stdout);
  #endif
  
  int n;
  cin >> n;

  int sum = 0;
  while(n--) {
    if(n%2 == 0) {
      sum+=n;
    }
  }

  cout << sum << endl;

  return 0;
}
