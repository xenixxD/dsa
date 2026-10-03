#include<iostream>
using namespace std;

/*
  to print
1
2 1
3 2 1 
4 3 2 1
*/

int main() {
  int n;
  cout<<"enter a number"<<endl;
  cin>>n;

  // //using for loop

  // for (int row = 1; row <= n; row++){
  //   for (int col= row; col >= 1; col--) {
  //     cout<<col<<" ";
  //   }
  //   cout<<endl; 
  // } 

  //using while loop

  // int row = 1;
  // while (row <= n) {
  //   int col = row; 
  //   while (col >= 1) {
  //     cout<<col<<" ";
  //     col--;
  //   }
  //   row++;
  //   cout<<endl;
  // };

  //Other method by while loop
  // int row = 1;
  // while (row <= n){
  //   int col = 1;
  //   while (col <= row) {
  //     cout<<(row - col + 1)<<" ";
  //     col++;
  //   }
  //   row++;
  //   cout<<endl;
  // };

  //Other method by for loop
  for(int row = 1; row <= n; row++) {
    for(int col = 1; col <= row; col++) {
      cout<<(row - col + 1)<<" ";
    }
    cout<<endl;
  };

  
  return 0;
}