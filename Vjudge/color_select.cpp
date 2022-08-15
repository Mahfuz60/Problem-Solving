#include <bits/stdc++.h>
using namespace std;
int main()
{
  int a, b, c;
  cin >> a >> b >> c;
  int count = 0;

  if (a != b)
  {
    count++;
  }
  if (b != c)
  {
    count++;
  }
  if (a != c)
  {
    count++;
  }

  cout << count << endl;

  return 0;
}