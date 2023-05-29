#include <iostream>
using namespace std;
void maximumdifference(int arr[], int n)
{
  int minElement = arr[0];
  int result = arr[1] - arr[0];
  for (int i = 1; i < n; i++)
  {
    int difference = arr[i] - minElement;
    if (difference > result)
    {
      result = difference;
    }
    if (arr[i] < minElement)
    {
      minElement = arr[i];
    }
  }
  cout << result;
}
// void maximumdifference(int arr[], int n){
//   int differ = arr[1]-arr[0];
//   for(int i = 0; i < n; i++) {
//     for(int j=i+1; j < n; j++) {
//       if((arr[j]-arr[i])>differ){
//         differ = arr[j]-arr[i];
//       }
//     }
//   }
//   cout<<differ<<endl;
// }//O(n^2) solution
int main()
{
  int n;
  cout << "Enter the number of elements" << endl;
  cin >> n;
  int arr[n];
  cout << "Enter the elements of array" << endl;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  maximumdifference(arr, n);
  return 0;
}