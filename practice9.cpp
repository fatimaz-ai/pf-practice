#include<iostream>
using namespace std;

int AskUserForNumber()  {
  int num;
  cout<<"Enter a number:";
  cin>>num;
  return num;
}

int doubleNumber(int num) { 
  return num*2;
}

int main()   {
  int n=AskUserForNumber();
  cout<<"The double of " << n << " is " << doubleNumber(n) <<endl;
}