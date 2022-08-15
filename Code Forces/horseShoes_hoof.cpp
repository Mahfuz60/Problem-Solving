#include <bits/stdc++.h>
using namespace std;
int main()
{

  int arr[4], count = 0;
  for (int i = 0; i < 4; i++)
  {
    cin >> arr[i];
  }

  // for (int i = 0; i < 4; i++)
  // {
  //   for (int j = i + 1; j < 4; j++)
  //   {
  //     if (arr[i] > arr[j])
  //     {
  //       swap(arr[i], arr[j]);
  //     }
  //   }
  // }

  // or
  sort(arr, arr + 4);

  for (int i = 0; i < 3; i++)
  {
    if (arr[i] == arr[i + 1])
    {
      count++;
    }
  }
  cout << count << endl;

  return 0;
}