#include <iostream>
#include <string>
using namespace std;

void fromdecimaltoroman(int n, string *str) {
  short tens = n / 10;
  if (tens < 9 && tens != 4) {
    if (tens > 4) {
      *str += "L";
      tens -= 5;
    }
    for (int i = 0; i < tens; i++) {
      *str += "X";
    }
  }
  else if (tens == 9) {
    *str += "XC";
  }
  else if (tens == 4) {
    *str += "XL";
  }
  n %= 10;
  
  if (n < 9 && n != 4) {
    if (n > 4) {
      *str += "V";
      n -= 5; 
    }
    for (int i = 0; i < n; i++) {
      *str += "I";
    }
  }
  else if (n == 9) {
    *str += "IX";
  }
  else if (n == 4){
    *str += "IV";
  }
}

int main() {
  int n; string str;
  cin >> n;
  fromdecimaltoroman(n, &str);
  cout << str << endl;
}