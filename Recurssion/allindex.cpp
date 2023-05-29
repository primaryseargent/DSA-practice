#include <iostream>
using namespace std;
int allindex(int arr[], int n, int x, int output[])
{
  if (n <= 0)
  {
    return 0;
  }
  int smallOutput = allindex(arr + 1, n - 1, x, output);
  for (int i = 0; i < smallOutput; i++)
  {
    output[i] += 1;
  }
  if (arr[0] == x)
  {
    for (int i = smallOutput; i >= 0; i--)
    {
      output[i + 1] = output[i];
    }
    output[0] = 0;
    return smallOutput + 1;
  }
  else
    return smallOutput;
}
void print(int arr[], int n, int x)
{
  int output[n];
  int size = allindex(arr, n, x, output);
  for (int i = 0; i < size; i++)
  {
    cout << output[i] << " ";
  }
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
  print(arr, n, x);
  return 0;
}