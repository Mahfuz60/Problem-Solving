// covert binary number to decimal number
#include <iostream>
#include <math.h>
using namespace std;
int binaryToDecimal(int n)
{
  int result = 0;
  int x = 1; // temp variable
  while (n > 0)
  {
    int y = n % 10;
    result = result + x * y;
    x =x*2;
    n = n / 10;
  }
  return result;
}
int main()
{
  int n;
  cin >> n;
  cout << binaryToDecimal(n);

  return 0;
}