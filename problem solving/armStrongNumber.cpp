#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int sum = 0;
  int orginal_n = n;

  while (n > 0)
  {
    int lastDigit = n % 10;
    sum += pow(lastDigit, 3);
    n = n / 10;
  }

  if (sum == orginal_n)
  {
    cout << "Armstrong number" << endl;
  }
  else
  {
    cout << "Non Armstrong Number" << endl;
  }

  return 0;
}