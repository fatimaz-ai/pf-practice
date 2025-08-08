#include <iostream>
using namespace std;

int main()  {
  int n;
  cout <<"Enter a number:";
  cin >>n;
  if ((n>0) && (n%2==0))
    cout <<"The number is positive and even";
  else if ((n>0) && (n%2!=0))
    cout <<"The number is positive and odd ";
  else if (n<0)
    cout <<"The number is negative";
  else 
    cout <<"The number is zero";
}