#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  freopen("../../input.txt", "r", stdin);
  freopen("../../output.txt", "w", stdout);
#endif

  int n;
  cin >> n;

  bool flag = false;
  for(int i=2; i<=n; i++) {
    flag = false;
    for(int j=2; j<i; j++) {
      if(i%j == 0) {
        flag = true;
      }
    }
    if(!flag) {
      cout << i << endl;
    }
  }

  return 0;
}
