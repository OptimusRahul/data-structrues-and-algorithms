#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
  freopen("../../input.txt", "r", stdin);
  freopen("../../output.txt", "w", stdout);
#endif

  char c;
  c = cin.get();

  int charCount = 0, whiteSpaceCount = 0, numCount = 0;

  while (c != '$')
  {
    if ((int)c >= 97 && (int)c <= 122)
    {
      charCount++;
    }
    if (c == '\t' || c == '\n' || c == ' ')
    {
      whiteSpaceCount++;
    }
    if ((int)c >= 48 && (int)c <= 57)
    {
      numCount++;
    }
    c = cin.get();
  }

  cout << charCount << " " << numCount << " " << whiteSpaceCount << endl;

  return 0;
}
