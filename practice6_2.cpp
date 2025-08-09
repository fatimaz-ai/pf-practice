#include<iostream>
using namespace std;

int main()  {
  int n; //factorial number
  int f=1;
  cout<<"Enter a number:";
  cin>>n;
  for(int a=1;a<=n;a++)  {
    f=f*a;
   }
  cout <<"Factorial of" << n << "is" << f <<endl;
}