#include<iostream>
#include <algorithm>

using namespace std;

void sort_0_1 (int arr[], int size) {
  sort(arr, arr + size);

    for (int i = 0; i <  size; i++) {
      cout << arr[i] << " ";
  } 
};

int main() {
  
  int arr1[9] ={2, 0, 1, 2, 1, 0, 0, 1, 2};

  sort_0_1(arr1, 9);

  return 0;
}