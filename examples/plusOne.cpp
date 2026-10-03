#include<iostream>
using namespace std;

class Plus {
  public:
  void plusOne (int digits[], int n) {
    digits[n - 1] = digits[n - 1] + 1;

    if (digits[n - 1] == 0) {
      cout<<digits[n] + 1;
    } 
  }
  void showArr(int digits[], int n) {
    for(int i = 0; i < n; i++) {
        cout << digits[i];
    }
  }
};

int main() {

  int digits1[3] = {1, 2, 3};
  int digits2[4] = {4, 3, 2, 1};
  int digits3[2] = {8, 9};
  
  Plus obj;

  // obj.plusOne(digits1, 3);
  // obj.showArr(digits1, 3);
  
  // obj.plusOne(digits2, 4);
  // obj.showArr(digits2, 4);

  obj.plusOne(digits3, 2);
  obj.showArr(digits3, 2);



  return 0;
}