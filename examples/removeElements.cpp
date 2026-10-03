#include<iostream>
using namespace std;

int removeElements(int nums[], int n, int val) {
  int i = 0;
  for (int j = 1; j < n; j++) {
    if (nums[i] == nums[j]) {
      i++;
      nums[i] = nums[j];
    }
  }
  return i + 1;  
};

int main() {
  
  return 0;
}