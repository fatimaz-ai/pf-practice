#include<iostream>
using namespace std;

int main() {
  int marks;
  cout <<"enter your marks:";
  cin >> marks;
  if((marks<=100) && (marks>=90))
     cout <<"Your grade is A";
  else if ((marks<=89) && (marks>=80))
     cout <<"Your grade is B";
  else if ((marks<=79) && (marks>=70))
    cout <<"Your grade is C";
  else if((marks<=69) && (marks>=60))
    cout <<"Your grade is D";
  else
    cout <<"Your grade is F";
}