#include<iostream>
using namespace std; 

int marks(int a,int b,int c)  {
    cout << "Subject1 marks: " << a << endl;
    cout << "Subject2 marks: " << b << endl;
    cout << "Subject3 marks: " << c << endl;
  return 0;
}

float avg(int a,int b,int c)  {
  int sum=0;
  float average;
  sum=a+b+c;
  average=(float)sum/3;
  cout << "Average is: " << average <<endl;
  return average;
}

int main()   {
  int num1,num2,num3;
  cout<<"Enter marks for subject1: " <<endl;
  cin>>num1;
  cout<<"Enter marks for subject2: " <<endl;
  cin>>num2;
  cout<<"Enter marks for subject3: " <<endl;
  cin>>num3;
 // calling marks function
  marks(num1,num2,num3);
 // calling average function
  float average = avg(num1, num2, num3);
  
  if(average>=50)
    cout << "Student has passed." << endl;
  else
    cout<<"Student has failed." << endl;
}