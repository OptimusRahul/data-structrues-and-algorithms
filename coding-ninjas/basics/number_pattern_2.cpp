#include <iostream>
using namespace std;

int main() {
  #ifndef ONLINE_JUDGE
    freopen("../../input.txt", "r", stdin);
    freopen("../../output.txt", "w", stdout);
  #endif

  int n;
  cin >> n;

  int i=1;
  while(i<=n) {
    int space = 1, j = 1, k = i;

    while(space <= (n-i)) {
      cout << " ";
      space++;
    }

    while(j<=i) {
      cout << k;
      k++;
      j++;
    }
    i++;
    cout << endl;
  }

  return 0;
}
