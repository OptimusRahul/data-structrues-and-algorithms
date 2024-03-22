#include <iostream>
using namespace std;

int main() {
  #ifndef ONLINE_JUDGE
    freopen("../../input.txt", "r", stdin);
    freopen("../../output.txt", "w", stdout);
  #endif
  
  int s,e,w;
  cin >> s >> e >> w;

  int cel;

  while(s<=e) {
    cel = (5*(s-32))/9;
    cout << s << "\t" << cel << endl;
    s+=w;
  }

  return 0;
}
