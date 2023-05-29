#include <iostream>
using namespace std;
int largestElement(int arr[], int n)
{
  int max = arr[0];
  int maxIndex = 0;
  for (int i = 1; i < n; i++)
  {
    if (arr[i] > max)
    {
      max = arr[i];
      maxIndex = i;
    }
  }
  return maxIndex;
}
int main()
{
  int arr[5];
  cout << "Enter the elements of the array" << endl;
  for (int i = 0; i < 5; i++)
  {
    cin >> arr[i];
  }
  cout << largestElement(arr, 5);
  return 0;
}