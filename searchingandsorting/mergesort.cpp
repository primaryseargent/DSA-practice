#include <iostream>
using namespace std;
// void merge(int arr[], int n1, int n2, int n3){
//   int size1 = n2-n1+1;
//   int size2 = n3-n2;
//   int arr1[size1], arr2[size2];
//   for (int i = 0; i < size1; i++) arr1[i] = arr[n1 + i];
//   for (int j = 0; j < size2; j++) arr2[j] = arr[n2 + 1 + j];
//   int i=0, j=0, k=n1;
//   while(i<size1 && j<size2){
//   if(arr1[i]<=arr2[j]){
//     arr[k++] = arr1[i++];
//   }
//   else{
//     arr[k++] = arr2[j++];
//   }
// }
// while(i<size1){
//   arr[k++] = arr1[i++];
// }
// while(j<size2){
//   arr[k++] = arr2[j++];
// }
// }
void merge(int arr[], int start, int end){
	int size = end - start + 1;
	int mid = (start+end)/2;
	int merge[size];
	int i = start, j = mid+1, k = 0;
	while(i<=mid && j<=end) {
		if(arr[i]<=arr[j]) {
			merge[k++] = arr[i++];
		}
		else merge[k++] = arr[j++];
	}
	while(i<=mid) {
		merge[k++] = arr[i++];
	}
	while(j<=end) {
		merge[k++] = arr[j++];
	}
	for(int i = 0; i<size; i++) {
		arr[i+start] = merge[i];
	}
}
void mergesort(int arr[], int start, int end){
	if(start>=end) return;
	int mid = (start + end)/2;
	mergesort(arr, start, mid);
	mergesort(arr, mid+1, end);
	merge(arr,start,end);
}
int main(){
	int n;
	cout<<"Enter the number of elements"<<endl;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++) {
		cin>>arr[i];
	}
	mergesort(arr, 0, n-1);
	for(int i=0; i<n; i++) {
		cout<<arr[i]<<" ";
	}
	return 0;
}
