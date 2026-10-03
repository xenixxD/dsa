#include<iostream>
using namespace std;

/* To Print
  D
  C D
  B C D
  A B C D
*/

int main() {

  int n;
  cin>>n;
  
  for (int row = 0; row < n; row ++ ){
    for (int col = 0; col < row; col++ ){
      char ch = 'D' + ( col - row);
      cout<<ch;
    };
    cout<<endl;
  };

  // int row = 1;
  // while (row <= n){
  //   int col = 1;
  //   while (col <= row) {
  //     char ch = 'D' + ( col - row);
  //     cout<<ch<<" ";
  //     col++;
  //   }
  //   row++;
  //   cout<<endl;
  // };

  return 0;
}