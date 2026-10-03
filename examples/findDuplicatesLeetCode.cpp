#include<iostream>
using namespace std;

void findDuplicate(int arr[], int size) {
  for(int i = 0; i < size; i++) {
    for(int j = i + 1; j < size; j ++) {
      if((arr[i]^arr[j]) == 0) {
        cout<<arr[i]<<endl;
      }
    }
  }
}

int main() {

  int arr1[8] = {4,3,2,7,8,2,3,1};
  int arr2[3] = {1,1,2};
  int arr3[1] = {1};

  findDuplicate(arr1, 8);

  findDuplicate(arr2, 3);

  findDuplicate(arr3, 1);
  
  return 0;
}