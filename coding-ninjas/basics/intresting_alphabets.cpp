#include <iostream>
using namespace std;

int main() {
  #ifndef ONLINE_JUDGE
    freopen("../../input.txt", "r", stdin);
    freopen("../../output.txt", "w", stdout);
  #endif

  int n;
  cin >> n;

  int i=0;
  while(i<n) {
    int j=0, k=n-i-1;
    while(j<=i) {
      cout << (char)(65+k);
      j++;
      k++;
    }
    cout << endl;
    i++;
  }

  return 0;
}
