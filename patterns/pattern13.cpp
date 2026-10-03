#include<iostream>
using namespace std;

/*
To print 
A
B C
D E F
*/

int main() {
  int n;
  cin>>n;
  int i = 0;

  int row = 1;
  while (row <= n){
    int col = 1;
    while (col <= row) {
      char ch = 'A' + i;
      cout<<ch<<" ";
      col++;
      i++;
    }
    row++;
    cout<<endl;
  };
  return 0;
}