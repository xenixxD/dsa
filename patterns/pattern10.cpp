#include<iostream>
using namespace std;

/*
To print
A B C
A B C
A B C
*/

int main() {
  int n;
  cin>>n; 
  //Using While loop
  int row = 1;
  while (row <= n ) {
    int col = 1;
    while(col <= n) {
      char ch = 'A' + col - 1;
      cout<<ch<<" ";
      col++;
    }
    cout<<endl;
    row++;
  };
  
  
  return 0;
}