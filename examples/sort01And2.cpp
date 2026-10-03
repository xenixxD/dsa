#include <iostream>
using namespace std;

void printArr(int arr[], int size)
{
  for (int k = 0; k < size; k++)
  {
    cout << arr[k] << " ";
  }
  cout<<endl;
}

void sort01(int arr[], int size) {
  int low = 0, mid = 0, high = size - 1;
  
  while( mid <= high) {
    if(arr[mid] == 0) {
      swap(arr[low], arr[mid]);
      mid++;
      low++;
    } else if (arr[mid] == 1) {
      mid++;
    } else if (arr[mid] == 2) {
      swap(arr[mid], arr[high]);
      high--;
    }
  }

};


int main()
{

  int arr2[6] = {0, 1, 1, 0, 0, 1};
  int arr3[5] = {1, 0, 0, 1, 0};
  int arr4[5] = {0, 2, 1, 2, 1};
  int arr5[6] = {0, 1, 2, 2, 1, 0};

  sort01(arr5, 6);
  printArr(arr5, 6);

  sort01(arr4, 5);
  printArr(arr4, 5);

  sort01(arr3, 5);
  printArr(arr3, 5);

  sort01(arr2, 6);
  printArr(arr2, 6);

  return 0;
}