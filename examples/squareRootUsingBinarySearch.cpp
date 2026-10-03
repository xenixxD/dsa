#include<iostream>
using namespace std;

int floorSqrt (int x) {
  int s = 0;
  int e = x;
  int mid = s + (e - s)/2;
  int ans = -1;

  while ( s <= e ) {
    int square = mid*mid;

    if ( square == x) {
      return mid;
    }

    if (square > x) {
      e = mid - 1;
    } else if (square < x) {
      ans = mid;
      s = mid + 1;
    }
    mid = s + (e - s)/2;
    }
    return ans;
}

int main() {

  cout<<floorSqrt(4)<<endl;
  cout<<floorSqrt(35)<<endl;
  
  return 0;
}