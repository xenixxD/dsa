#include<iostream>
using namespace std;

/*
To print
A A A 
B B B
C C C
*/

int main() {
  int n;
  cin>>n; 
  //Using While loop
  int row = 1;
  while (row <= n ) {
    int col = 1;
    while(col <= n) {
      cout<<char('A' + row - 1)<<" ";
      col++;
    }
    cout<<endl;
    row++;
  };
  
  
  return 0;
}