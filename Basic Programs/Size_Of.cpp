#include <iostream>
using namespace std;

int main() {
  int a = 5;
  short s = 10;
  char ch = 'a';
  bool flag = true;
  float f = 1.2;
  double d = 11.34;
  long l = 356;
  long long ll = 3245;
  cout << "Size of a: " << sizeof(a) << endl;
  cout << "Size of s: " << sizeof(s) << endl;
  cout << "Size of ch: " << sizeof(ch) << endl;
  cout << "Size of flag: " << sizeof(flag) << endl;
  cout << "Size of f: " << sizeof(f) << endl;
  cout << "Size of d: " << sizeof(d) << endl;
  cout << "Size of l: " << sizeof(l) << endl;
  cout << "Size of ll: " << sizeof(ll) << endl;
}