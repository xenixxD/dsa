#include<iostream>
using namespace std;

int peakMountainValue (int arr[], int n) {
  int maxIndex = 0;

  for (int i = 0; i < n; i++) {
    if (arr[i] > arr[maxIndex]) {
        maxIndex = i;
    }    
  }
  return maxIndex;
}

int main() {

  int arr1[3] = {0, 1, 0};
  int arr2[5] = {0, 1, 0, 100, 3};
  int arr3[8] = {10, 1, 0, 30, 5, 23, 56, 0};
  int arr4[4] = {0, 10, 5, 2};

  cout<<peakMountainValue(arr1, 3)<<endl;
  cout<<peakMountainValue(arr2, 5)<<endl;
  cout<<peakMountainValue(arr3, 8)<<endl;
  cout<<peakMountainValue(arr4, 4)<<endl;

  return 0;
}