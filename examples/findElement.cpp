#include<iostream>
using namespace std;

int findElement (int arr[], int n, int target) {
  int s = 0;
  int e = n;
  
  while (s < e) {
    int i = 0;
    if (arr[i] == target) {
      cout<<"Array is present";
    };
  };
}

int main() {
  
  int arr1[11] = {-1, -2, 13, 11, 10, 7, 4, 3, 3, 1, 0};

  findElement(arr1, 11, 12);

  return 0;
}