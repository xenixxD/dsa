#include<iostream>
using namespace std;

int removeDuplicates(int arr[], int n) {
  if ( n == 0) {
    return 0;
  }

  int i = 0;
  for (int j = 1; j < n ; j++ ) {
    if (arr[i] != arr[j]) {
      i++;
      arr[i] = arr[j];
    }
  }
  return i + 1;
}

int main() {

  int arr1[10] = {0,0,1,1,1,2,2,3,3,4};
  int arr2[7] = {1,1,1,2,3,3,4};

  cout<<removeDuplicates(arr1, 10)<<endl;
  cout<<removeDuplicates(arr2, 7)<<endl;

  return 0;
}