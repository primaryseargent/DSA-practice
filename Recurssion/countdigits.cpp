#include <iostream>
using namespace std;
int countdigits(int n)
{
  if (n / 10 == 0)
    return 1;
  int smallOutput = countdigits(n / 10);
  return smallOutput + 1;
}
int main()
{
  int n, output;
  cout << "Enter the number" << endl;
  cin >> n;
  output = countdigits(n);
  cout << "The no of digit in the number is " << output;
  return 0;
}