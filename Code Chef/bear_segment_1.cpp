#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  while (n--)
  {
    string s;
    cin >> s;
    int count1 = 0, count2 = 0;
    for (int i = 0; i < s.length(); i++)
    {
      if (s[i] == '1')
      {
        count1++;
      }
    }
    for (int i = 0; i < s.length() - 1; i++)
    {
      if (s[i] == '1' && s[i + 1] == '1')
      {
        count2++;
      }
      else if (s[i] == '1' && s[i + 1] == '0')
      {
        break;
      }
    }
    if (count1 == count2+1)
    {
      cout << "YES" << endl;
    }
    else
    {
      cout << "NO" << endl;
    }
  }
  return 0;
}