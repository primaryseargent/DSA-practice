#include <iostream>
using namespace std;
int selectionsort(int arr[], int n) {
  int minIndex, minElement;
  for (int i = 0; i < n - 1; i++) {
    // finding the minimum element
    int min_element = arr[i];
    int min_index = i;
    for (int j = i + 1; j < n; j++) {
      if (arr[j] < min_element) {
        min_element = arr[j];
        min_index = j;
      }
    }
    // swapping the element
    int temp = arr[i];
    arr[i] = arr[min_index];
    arr[min_index] = temp;
  }
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  return 0;
}
int main() {
  int arr[5];
  int n;
  cout << "Enter the number of elements in the array" << endl;
  cin >> n;
  cout << "Enter the elements" << endl;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  selectionsort(arr, n);
  return 0;
}
