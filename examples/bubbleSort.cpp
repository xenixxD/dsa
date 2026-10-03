#include<iostream>
using namespace std;

int buddbleSort(int nums[], int n) {
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n - i; j++) {
      if(nums[j] > nums[j+1]) {
        swap(nums[j], nums[j+1]);
      }
    }
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


  buddbleSort(arr1, 4);
  printArray(arr1, 4);

  buddbleSort(arr2, 6);
  printArray(arr2, 6);
  
  return 0;
}