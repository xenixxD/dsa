#include<iostream>
using namespace std;

int floorSqrt (int key) {
  int a = 0;
  while ( (a * a) <= key ) {
    if ( (a * a) != key ) {
      a++;
    }
    
    if ( (a * a) == key ) {
      return a;
    } else if ( (a * a) >= key ) {
      a--;
      return a;
    }
  }
}

int main() {

  cout<<floorSqrt(4)<<endl;
  cout<<floorSqrt(8)<<endl;
  
  return 0;
}