#include<iostream>
using namespace std;

int isPerfectSquare(int num) {
  int s = 0;
  int e = num;
  int mid = s + (e - s)/2;
  int ans = false;

  while (s <= e) {
    long long int square = mid*mid;

    if (square == num) {
      return true;
    }

    if (square > num) {
      e = mid - 1;
    } else if (square < num) {
      s = mid + 1;
    } 
    mid = s + (e - s)/2;
  }
  return ans;
}

int main() {

  cout<<isPerfectSquare(16)<<endl;
  cout<<isPerfectSquare(4)<<endl;
  cout<<isPerfectSquare(36)<<endl;
  cout<<isPerfectSquare(35)<<endl;
  
  return 0;
}