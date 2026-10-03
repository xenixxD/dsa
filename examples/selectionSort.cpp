#include<iostream>
using namespace std;

int selectionsort(int arr[], int n) {
  for (int i = 0; i < n - 1; i++) {
    int minIndex = i;
    for (int j = i + 1; j < n; j++) {
      if(arr[j] < arr[minIndex]) {
        minIndex = j;
      }
    }
    swap(arr[minIndex], arr[i]);
  }
};

void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {

  int arr1[4] = {5,6,3,1};
  int arr2[6] = {5,1,1,2,0,0};


  selectionsort(arr1, 4);
  printArray(arr1, 4);

  selectionsort(arr2, 6);
  printArray(arr2, 6);
  
  return 0;
}