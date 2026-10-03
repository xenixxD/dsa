#include<iostream>
using namespace std;

int insertionPosition (int arr[], int n, int target) {
  int s = 0;
  int e = n;
  int mid = s + (e - s)/2;

  int i = 0;

  while (s <= e) {
    if (arr[mid] == target) {
      return mid;
    } else if (arr[mid] > target) {
      e = mid - 1;
    } else if (arr[mid] < target) {
      s = mid + 1;
    } 
    mid = s + (e - s)/2;
  }
  return mid;
}

int main() {
  int nums1[4] = {1, 3, 5, 6};
  int nums2[2] = {1, 3};

  cout<<insertionPosition(nums1, 4, 7)<<endl;
  cout<<insertionPosition(nums2, 2, 2)<<endl;

  return 0;
}