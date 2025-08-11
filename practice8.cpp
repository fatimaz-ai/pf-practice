#include<iostream>
using namespace std;

int main()  {
  int num;
  cout<<"Enter a number:";
  cin>>num;
  for(int n=num;n>0;n++)  {
    cout<<"Square of number is:"<<n*n<<endl;
    cin>>num;
  }
}