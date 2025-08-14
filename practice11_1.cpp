#include<iostream>
using namespace std;

int main()  {
  int n;
  int marks[100];
  
  //marks of only n students
  cout<<"Enter number of students: ";
  cin>>n;

  //marks of n students
  for(int i=0;i<n;i++) {
   cout<<"Enter marks: ";
   cin>>marks[i];
  }

  //sum of marks
  int sum=0;
  for(int i=0;i<n;i++) {
    sum=sum+marks[i];
  }
  cout<<"Total sum is: "<<sum<<endl;
  
  //for average
  int avg=sum/n;
  cout<<"Average is: "<<avg<<endl;
  
  //highest and lowest marks
  int highest=marks[0];
  int lowest=marks[0];
  for(int i=0;i<n;i++)  {
    if(highest<marks[i])
      highest=marks[i];
    if(lowest>marks[i])
      lowest=marks[i];
  }
  cout<<"Highest marks: "<<highest<<endl;
  cout<<"Lowest marks: "<<lowest<<endl;
}