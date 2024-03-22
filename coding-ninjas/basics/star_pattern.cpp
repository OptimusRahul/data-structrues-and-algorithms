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
    int j=1, space = 1;

    while(space <= (n-i)) {
      cout << " ";
      space++;
    }

    while(j<=(2*i-1)) {
      cout << "*";
      j++;
    }
    cout << endl;
    i++;
  }

  return 0;
}
