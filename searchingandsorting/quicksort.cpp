#include <iostream>
using namespace std;
int partiton(int arr[], int start, int end)
{
  int count = 0;
  int x = arr[start];
  for (int i = start + 1; i <= end; i++)
  {
    if (arr[i] < x)
      ++count;
  }
  swap(arr[start], arr[start + count]);
  int i = start, j = end;
  while (arr[i] != x && arr[j] != x)
  {
    if (arr[i] <= x)
      i++;
    else if (arr[j] > x)
      j--;
    else
    {
      swap(arr[i], arr[j]);
      i++;
      j--;
    }
  }
  return start + count;
}
void quicksort(int arr[], int start, int end)
{
  if (start >= end)
    return;
  int c = partiton(arr, start, end);
  quicksort(arr, start, c - 1);
  quicksort(arr, c + 1, end);
}
int main()
{
  int n;
  cout << "Enter the number of elements" << endl;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  quicksort(arr, 0, n - 1);
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  return 0;
}
