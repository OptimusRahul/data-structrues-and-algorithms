#include <iostream>
using namespace std;

int main() {
  #ifndef ONLINE_JUDGE
    freopen("../../input.txt", "r", stdin);
    freopen("../../output.txt", "w", stdout);
  #endif
  
  int x,n;
  cin >> x >> n;

  int res = 1, i = 1;
  while(i<=n) {
    res*=x;
    i++;
  }

  cout << res << endl;

  return 0;
}
