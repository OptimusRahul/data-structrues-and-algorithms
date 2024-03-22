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
  int upper = n/2+1, lower = n/2;
  while(i<=upper) {
    int space = 1, j=1;
    
    while(space <= (upper-i)) {
      cout << " ";
      space++;
    }
    
    while (j<=(2*i-1)) {
      cout << "*";
      j++;
    }
    
    cout << endl;
    i++;
  }
  i=lower;
  while(i>0) {
    int space = 1, j=1;
    while(space <= (lower-i)+1) {
      cout << " ";
      space++;
    }

    while(j<=(2*i-1)) {
      cout << "*";
      j++;
    }
    i--;
    cout << endl;
  }

  return 0;
}
