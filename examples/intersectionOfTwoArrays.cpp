/*
Problem statement
You are given two arrays 'A' and 'B' of size 'N' and 'M' respectively. Both these arrays are sorted in non-decreasing order. You have to find the intersection of these two arrays.

Intersection of two arrays is an array that consists of all the common elements occurring in both arrays.

Note :
1. The length of each array is greater than zero.
2. Both the arrays are sorted in non-decreasing order.
3. The output should be in the order of elements that occur in the original arrays.
4. If there is no intersection present then return an empty array.
Detailed explanation ( Input/output format, Notes, Images )
Constraints :
1 <= T <= 100
1 <= N, M <= 10^4
0 <= A[i] <= 10^5
0 <= B[i] <= 10^5

Time Limit: 1 sec
Sample Input 1 :
2
6 4
1 2 2 2 3 4
2 2 3 3
3 2
1 2 3
3 4  
Sample Output 1 :
2 2 3
3   
Explanation for Sample Input 1 :
For the first test case, the common elements are 2 2 3 in both the arrays, so we print it.

For the second test case, only 3 is common so we print 3.
Sample Input 2 :
2
3 3 
1 4 5
3 4 5
1 1
3
6
Sample Output 2 :
4 5
-1
*/
#include<iostream>
using namespace std;

void intersection (int arr1[], int arr2[], int size1, int size2) {
  int i = 0, j = 0;
  bool found = false;

  while(i < size1 && j < size2) {
    if(arr1[i] == arr2[j]) {
      cout<<arr1[i]<< " ";
      found = true;
      i++;
      j++;
    } else if (arr1[i] < arr2[j]) {
      i++;
    } else if (arr1[i] > arr2[j]) {
      j++;
    }
  }

  if (!found) {
    cout<<-1;
  }

  cout<<endl;
  
};

int main() {

  int arr1[3] = {1, 2, 3};
  int arr2[2] = {3, 4};

  int arr3[6] = {1, 2, 2, 2, 3, 4};
  int arr4[4] = {2, 2, 3, 3};

  int arr5[1] = {3};
  int arr6[1] = {7};

  intersection(arr1, arr2, 3, 2);
  intersection(arr3, arr4, 6, 4);
  intersection(arr5, arr6, 1, 1);
  
  return 0;
}