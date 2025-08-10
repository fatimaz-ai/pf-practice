#include<iostream>
using namespace std;

int main()   {
  int n,sum;
  cout<<"Enter a number:";
  cin>>n;
  sum=0;
  do {
    sum=sum+n; 
    cout<<"Enter a number:";
    cin>>n;
  }
  while(n!=0);
     cout<<"Total sum is:" <<sum<<endl;
  cin>>sum;
   }