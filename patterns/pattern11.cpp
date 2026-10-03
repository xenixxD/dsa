#include<iostream>
using namespace std;

/*
To print
A B C
D E F
G H I
*/

int main() {
  int n;
  cin>>n;
  int i = 0; 
  //Using While loop
  int row = 1;
  while (row <= n ) {
    int col = 1;
    while(col <= n) {
      char ch = 'A' + i;
      cout<<ch<<" ";
      col++;
      i++;
    }
    cout<<endl;
    row++;
  };
  
  
  return 0;
}