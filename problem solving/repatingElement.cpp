#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  const int N = 1e6 + 2;
  int idx[N];

  for (int i = 0; i < N; i++)
  {
    idx[i] = -1;
  }

  // int min_idx = INT_MAX;
  // for (int i = 0; i < n; i++)
  // {
  //   if (idx[a[i]] != -1)
  //   {
  //     min_idx = min(min_idx, idx[a[i]]);
  //   }
  //   else
  //   {
  //     idx[a[i]] = i;
  //   }
  // }

  // if (min_idx == INT_MAX)
  // {
  //   cout << "-1" << endl;
  // }
  // else
  // {
  //   cout << min_idx + 1 << endl;
  // }

  return 0;
}