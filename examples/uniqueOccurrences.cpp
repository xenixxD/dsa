/*
Example 1:

Input: arr = [1,2,2,1,1,3]
Output: true
Explanation: The value 1 has 3 occurrences, 2 has 2 and 3 has 1. No two values have the same number of occurrences.
Example 2:

Input: arr = [1,2]
Output: false
Example 3:

Input: arr = [-3,0,1,-3,1,1,1,-3,10,0]
Output: true
 

Constraints:

1 <= arr.length <= 1000
-1000 <= arr[i] <= 1000
*/

#include<iostream>
using namespace std;

bool uniqueOccurrence(int arr[], int size) {

  for(int i = 0; i < size; i++) {
    int count = 0;
    for(int j = 0; j < size; j++) {
      if(arr[i] == arr[j]) {
        count++;
      }
    }
  };  
}

int main() {

  return 0;
}