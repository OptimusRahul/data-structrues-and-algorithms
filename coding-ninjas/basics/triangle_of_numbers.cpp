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
    int j=1, space=1, k=i;
    
    while(space <= (n-i)) {
      cout << " ";
      space++;
    }

    while(j<=i) {
      cout << k;
      j++;
      k++;
    }

    j=1, k-=2;

    while(j<i) {
      cout << k;
      j++;
      k--;
    }

    cout << endl;
    i++;
  }
  
  return 0;
}
