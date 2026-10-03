#include<iostream>
using namespace std;

/*
  to print
1
2 2
3 3 3
4 4 4 4
*/

int main() {
  int n;
  cout<<"Enter a number"<<endl;
  cin>>n;
  int i = 1;
  // using for loop
  for (int row = 0; row < n ; row ++){
    for (int col = 0; col <= row; col++){
      cout<<i<<" ";
    }
    i++;
    cout<<endl;
  };

  // using while loop
  // int row = 0;
  // while (row < n) {
  //   int col = 0;
  //   while (col <= row) {
  //     cout<<i<<" ";
  //     col++;
  //   }
  //   row++;
  //   i++;
  //   cout<<endl;
  // }

  return 0;
}