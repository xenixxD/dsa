#include<iostream>
using namespace std;

/*
  to print
1
2 3
4 5 6
7 8 9 10
*/

int main() {
  int n;
  cout<<"enter a number"<<endl;
  cin>>n;

   int i = 1;
  // for (int row = 0; row < n; row++){
  //   for (int col= 0; col <= row; col++) {
  //     cout<<i<<" ";
  //     i++;
  //   }
  //   cout<<endl; 
  // } 
  int row = 0;
  while (row < n) {
    int col = 0; 
    while (col <= row) {
      cout<<i<<" ";
      i++;
      col++;
    }
    row++;
    cout<<endl;
  };

  
  return 0;
}