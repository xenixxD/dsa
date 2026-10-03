#include<iostream>
using namespace std;

/* for printing
  1 2 3
  1 2 3
  1 2 3
*/

int main() {
  int n;
  cin>>n;

  int i = 1;
  // Using while loop
  // while (i<=n){
  //   int j = 1;
  //   while (j<=n) {
  //     cout<<j; 
  //     j = j + 1;
  //   }
  //   cout<<endl;
  //   i = i + 1;
  // }

  // Using for loop
  for (int row = 0; row < n; row++) {
    for (int col = 0; col < n; col++) {
      cout<<(col+1)<<" ";
    }
    cout<<endl;  
  }
  return 0;
}