#include <bits/stdc++.h>
using namespace std;
int main()
{
  int y, ans;
  cin >> y;
  ans = y;
  while (true)
  {
    if (ans % 4 == 2)
    {
      break;
    }
    else
    {
      ans++;
    }
  }
  cout << ans << endl;

  return 0;
}
