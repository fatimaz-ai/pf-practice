#include<iostream>
using namespace std;

int main()  {
  int n=0;
  int numbers[100];   //only using n numbers
  for(int i=0;i<n;i++)  {
  cout<<"Enter number: ";
  cin>>numbers[i]; }

  //condition to extract only even numbers
  for(int i=0;i<n;i++)  {
    if(n%2==0)  {
      n=numbers[i];
      cout<<n<<" is even "<<endl;
  } 
  }
}
