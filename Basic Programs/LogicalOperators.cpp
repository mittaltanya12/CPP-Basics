#include <iostream>
using namespace std;

int main() {
  float a = 5;
  int b = 3;
  cout << (a >= 5 && b <= 3) << endl;
  cout << (a < 5 && b > 3) << endl;
  cout << (a < 5 && b >= 3) << endl;
  cout << (a > 5 || b <= 3) << endl;
  cout << !(a < 5) << endl;
}