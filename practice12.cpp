#include<iostream>
using namespace std;

int main()  {
  int s;
  cout<<"Enter number of students: ";
  cin>>s;                                                                         int students[100];   //s number of students
  
    int sum=0;
    int i;
  //input marks and calculate sum
  for(i=0;i<s;i++) {
    cout<<"Enter marks: "<<endl;
    cin>>students[i];
    sum=sum+students[i];
  }
  
  //average
  int avg;
  avg=sum/s;
  cout<<"Average of entered marks is: "<<avg<<endl;
  
  //condition for average
  for(int i=0;i<s;i++)  {
    cout<<"For student " <<i+1 <<":"<<endl;
  if(students[i]>avg)
    cout<<"Marks are above average"<<endl;
  else if(students[i]==avg)
    cout<<"Marks are average"<<endl;
  else
    cout<<"Marks are below average"<<endl;
  }
}