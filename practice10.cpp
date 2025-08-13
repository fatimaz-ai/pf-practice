#include<iostream>
using namespace std;

int main()  {
  int marks[5]={1,2,3,4,5};
  int i;
  for(i=0;i<5;i++) {
  cout<<"Enter marks of student: "<<endl;
  cin>>marks[i];
}
  int total;
  total=0;
    total=total+marks[i];
    cout<<"Total marks of students are: "<<total<<endl;
  
  int avg;
  avg=total/5;
  cout<<"Average marks of students are: "<<avg<<endl;
}
