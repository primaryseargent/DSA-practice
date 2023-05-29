#include <iostream>
using namespace std;
bool check(int arr[], int n, int x)
{
  if (n <= 0)
  {
    return 0;
  }
  if (arr[0] == x)
  {
    return true;
  }
  bool smallOutput = check(arr + 1, n - 1, x);
  return smallOutput;
}
int main()
{
  int n, x;
  cout << "Enter the number of elements" << endl;
  cin >> n;
  int arr[n];
  cout << "Enter the elements" << endl;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  cout << "Enter the value of x" << endl;
  cin >> x;
  bool output;
  output = check(arr, n, x);
  cout << output;
  return 0;
}