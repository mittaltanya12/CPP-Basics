#include <iostream>
using namespace std;
int main() {
  //declare a integer type score variable
  int score;
  // print Enter the score
  cout<<"Enter the score"<<endl;
  //taking inputinto score variable
  cin>>score;
  //if condition
  if(score<300)
  {
    cout << "India wins"<<endl;
  }
  else
  {
    cout<<"Pak wins"<<endl;
  }
  
}