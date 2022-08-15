#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, t;
  cin >> t;
  for (int i = 1; i <= t; i++)
  {
    cin >> n;
    if (n % 4 != 0)
    {
      cout << "NO" << endl;
    }
    else
    {

      cout << "YES" << endl;
      int sum = 0;
      int x = n / 2;
      for (int i = 1; i <= x; i++)
      {
        cout << 2 * i << " ";
        sum += 2 * i;
      }
      for (int i = 1; i < x; i++)
      {
        cout << 2 * i - 1 << " ";
        sum -= 2 * i - 1;
      }
      cout << sum << endl;
    }
  }

  return 0;
}