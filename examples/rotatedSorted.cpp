#include<iostream>
using namespace std;

int getPivot (int arr[], int n) {
  int s = 0;
  int e = n - 1;
  int mid = s + (e - s)/2;

  while(s < e) {
    if (arr[mid] >= arr[0] ) {
      s = mid + 1;
    } else {
      e = mid;
    }
    mid = s + (e - s)/2;
  }
  return s;
}

int binarySearch(int arr[], int s, int e , int key) {
  int start = s;
  int end = e;
  int mid = start + (end - start)/2;//break it we will get (start+end)/2

  while(start <= end) {
    if(arr[mid] == key) {
      return mid;
    }
    if(key >= arr[mid]) {
      start = mid + 1;
    } else if (key <= arr[mid]) {
      end = mid - 1;
    }

    mid = start + (end - start)/2;
  }
  return -1;
}

int findPosition (int arr[], int n, int k) {
  int pivot = getPivot(arr, n);
  if (arr[pivot] <= k && k <= arr[n - 1]) {
    return binarySearch(arr, pivot, n - 1, k);
  } else {
    return binarySearch(arr, 0, pivot - 1, k);
  }
}


int main() {
  
  int arr1[5] = {3, 8, 10, 17, 1};
  int arr2[5] = {7, 8, 1, 3, 5};

  cout<<findPosition(arr1, 5, 17)<<endl;
  cout<<findPosition(arr2, 5, 8)<<endl;
  cout<<findPosition(arr2, 5, 1)<<endl;

  return 0;
}