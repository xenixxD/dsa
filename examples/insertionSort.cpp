#include<iostream>
using namespace std;

int insertionSort(int nums[], int n) {
  for(int i = 1; i < n; i++) {
    int key = nums[i];
    int j = i - 1;
    while (j >= 0 && nums[j] > key) {
      nums[j + 1] = nums[j];
      j--;
    }
    nums[j + 1] = key;
  }
};

void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout<<arr[i] << " ";
    }
    cout<<endl;
}

int main() {

  int arr1[4] = {5,6,3,1};
  int arr2[6] = {5,1,1,2,0,0};


  insertionSort(arr1, 4);
  printArray(arr1, 4);

  insertionSort(arr2, 6);
  printArray(arr2, 6);
  
  return 0;
}