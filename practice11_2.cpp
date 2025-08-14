#include<iostream>
using namespace std;

int main()  {
  int n;
  cout<<"Enter number of elements: ";
  cin>>n;
  int numbers[100];   //only using n numbers
  
  for(int i=0;i<n;i++)  {
  cout<<"Enter number: ";
  cin>>numbers[i]; }

  //condition to extract only even numbers
  for(int i=0;i<n;i++)  {
    if(numbers[i]%2==0)  {
      cout<<numbers[i]<<" is even "<<endl;
  } 
  }
}