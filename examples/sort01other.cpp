#include<iostream>
using namespace std;

void printArr(int arr[], int size) {
  for (int k = 0; k < size; k++) {
    cout << arr[k] << " ";
  }
}

void sort01(int arr[], int size) {
  int i = 0, j = (size - 1);
  while (i <= j) {
    if(arr[i] == 0) {
      i++;
    } else if (arr[j] == 1) {
      j--;
    } else if(arr[i] == 1 ) {
      swap(arr[i], arr[j]);
      i++;
      j--;
    } else if(arr[j] == 0) {
      swap(arr[i], arr[j]);
      i++;
      j--;      
    }
  }
  
}

int main() {
  
  int arr2[6] ={0, 1, 1, 0, 0, 1};
  int arr3[5] = {1, 0, 0, 1, 0};

  sort01(arr3, 5);
  printArr(arr3, 5);

  return 0;
}