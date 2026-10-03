#include<iostream>
using namespace std;

int firstOcc(int arr[], int n , int k) {
  int start = 0;
  int end = n - 1;
  int mid = start + (end - start)/2;//break it we will get (start+end)/2
  int ans = -1;

  while(start <= end) {
    if (arr[mid] == k) {
      ans = mid;
      end = mid - 1;
    } else if(k >= arr[mid]) {
      start = mid + 1;
    } else if (k <= arr[mid]) {
      end = mid - 1;
    }

    mid = start + (end - start)/2;
  }

  return ans;
}

int lastOcc(int arr[], int n , int k) {
  int start = 0;
  int end = n - 1;
  int mid = start + (end - start)/2;//break it we will get (start+end)/2
  int ans = -1;

  while(start <= end) {
    if (arr[mid] == k) {
      ans = mid;
      start = mid + 1;
    } else if(k >= arr[mid]) {
      start = mid + 1;
    } else if (k <= arr[mid]) {
      end = mid - 1;
    }

    mid = start + (end - start)/2;
  }

  return ans;
}

int main() {

  int arr1[5] = {1, 2, 3, 3, 5};

  int arr2[8] = {0, 0, 1, 1, 2, 2, 2, 2};

  cout<<firstOcc(arr1, 5, 3)<<","<<lastOcc(arr1, 5, 3)<<endl;
  cout<<firstOcc(arr2, 8, 2)<<","<<lastOcc(arr2, 8, 2)<<endl;
  
  return 0;
}