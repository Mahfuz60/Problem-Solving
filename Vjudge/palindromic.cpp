#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int sum = 0, rev;
  int temp = n;
  while (n > 0)
  {
    rev = n % 10;
    sum = (sum * 10) + rev;
    n = n / 10;
  }
  if (temp == sum)
  {
    cout << "Yes";
  }
  else
  {
    cout << "No";
  }

  return 0;
}