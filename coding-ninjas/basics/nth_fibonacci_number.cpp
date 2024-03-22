#include <iostream>
using namespace std;

int main() {
  #ifndef ONLINE_JUDGE
    freopen("../../input.txt", "r", stdin);
    freopen("../../output.txt", "w", stdout);
  #endif

  int n;
  cin >> n;

  int f0 = 0, f1=1, sum=0;
  for(int i=1; i<n; i++) {
    sum = f0+f1;
    f0 = f1;
    f1 = sum;
  }

  cout << sum;

  return 0;
}
