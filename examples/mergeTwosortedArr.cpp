#include<iostream>
using namespace std;

void mergeArr(int nums1[], int m, int nums2[], int n, int nums3[]) {
  int i = 0, j = 0, k = 0;

  while (i < m && j < n) {
    if (nums1[i] < nums2[j]) {
      nums3[k] = nums1[i];
      i++;
      k++;
    } else if (nums1[i] > nums2[j]) {
      nums3[k] = nums2[j];
      j++;
      k++;
    } else if (nums1[i] == nums2[j]) {
      nums3[k] = nums1[i];
      k++;
      nums3[k] = nums2[j];
      k++;
      i++;
      j++;
    } else if (nums1[i] == 0) {
      nums3[k] = nums2[j];
    } else if (nums2[j] == 0) {
      nums3[k] = nums1[i];
    }
  }

  while (i < m) {
    nums3[k] = nums1[i];
    i++;
    k++;
  }
  
  while (j < n) {
    nums3[k] = nums2[j];
    j++;
    k++;
  }
} 

void printArr (int nums3[], int n) {
  for (int i = 0; i < n; i++) {
    cout << nums3[i] << " ";
  }
  cout << endl;
}

int main() {

  int arr1[4] = {1, 2, 3, 4};
  int arr2[4] = {2, 4, 6, 8};
  int arr3[8];

  int arr4[6] = {1,2,3};
  int arr5[3] = {2,5,6};
  int arr6[6];

  mergeArr(arr4, 6, arr5, 3, arr6);
  printArr(arr6, 6);
  
  return 0;
}