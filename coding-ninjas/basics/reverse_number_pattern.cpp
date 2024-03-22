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
    int j=i;
    while(j>0) {
      cout << j;
      j--;
    }
    cout << endl;
    i++;
  }

  return 0;
}
