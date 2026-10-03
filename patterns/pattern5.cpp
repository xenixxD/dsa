#include<iostream>
using namespace std;

/*
  to print
*
* *
* * *
* * * *
*/

int main() {
  int n;
  cout<<"Enter a number"<<endl;
  cin>>n;
  // using for loop
  // for (int row = 0; row < n ; row ++){
  //   for (int col = 0; col <= row; col++){
  //     cout<<"* ";
  //   }
  //   cout<<endl;
  // };

  // using while loop
  int row = 0;
  while (row < n) {
    int col = 0;
    while (col <= row) {
      cout<<"* ";
      col++;
    }
    row++;
    cout<<endl;
  }

  return 0;
}