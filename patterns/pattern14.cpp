#include<iostream>
using namespace std;

/*
To print 
A
B C
C D E
D E F G
*/

int main() {
  int n;
  cin>>n;
  int i = 0;

  int row = 1;
  while (row <= n){
    int col = 1;
    while (col <= row) {
      char ch = ('A' + row + col - 2);
      cout<<ch<<" ";
      col++;
      i++;
    }
    row++;
    cout<<endl;
  };
  return 0;
}