#include<iostream>
using namespace std;

/* for printing
    1 2 3
    4 5 6
    7 8 9

*/ 

int main() {
  int n;
  cout<<"enter a number"<<endl;
  cin>>n;

  int i = 1;
  // using for loop
  // for (int row = 0; row < n; row++) {
  //   for (int col= 0; col < n; col++) {
  //     cout<<i<<" ";
  //     i++;
  //   }
  //   cout<<endl; 
  // } 
  
  // using while loop
  int row = 0;
  while (row < n) {
    int col = 0;
    while (col < n) {
      cout<<i<<" "; 
      col++;
      i++;
    }
    row++;  
    cout<<endl; 
  }

  return 0;
}