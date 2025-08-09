#include<iostream>
using namespace std;

int main()  {
  int n;
  cout <<"Enter a number:";
  cin>>n;
  int sum;
  int a=1;
  sum=0;
  while(a<=n) {
    sum=a+sum;
    cout<<sum<<endl;
    a++;
  }
}