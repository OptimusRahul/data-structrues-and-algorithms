#include <iostream>
using namespace std;

int main() {
  #ifndef ONLINE_JUDGE
    freopen("../../input.txt", "r", stdin);
    freopen("../../output.txt", "w", stdout);
  #endif
  int n;
  cin >> n;
  
  int i = 1;
  
  while(i<=n) {
    int j=1, k=i;
    while(j<=i) {
      cout << k;
      j+=1;
      k+=1;
    }
    cout << endl;
    i+=1;
  }

  return 0;
}
