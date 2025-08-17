#include<iostream>
using namespace std;

int main()   {
  int c = 0;
  while(c !=5) {
    cout << "-----Menu-----" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Exit" << endl;
    cout << "  " << endl;
    cout << "Enter your choice: " ;
    cin >> c;

    if(c==5)  {
       cout << "Goodbye" << endl;
    break;     // stop loop
    }

    int num1 = 0,num2 = 0;
    cout << "Enter 1st number: " ;
    cin >> num1;
    cout << "Enter 2nd number: " ;
    cin >> num2;
    
     int sum,sub,mul,div=0;
    if(c==1)  {
       sum=num1+num2;
       cout << "Result: " << sum << endl << endl; }
    else if(c==2) {
       sub=num1-num2;
       cout << "Result: " << sub << endl << endl; }
    else if(c==3) {
       mul=num1*num2;
       cout << "Result: " << mul << endl << endl; }
    else if(c==4) {
       if(num2==0) {
         cout << "Error: Cannot divide by zero" << endl << endl; }
       else {
         div=num1/num2;
         cout << "Result: " << div << endl << endl; }
    }
    else  {
       cout << "Invalid choice! Try again" << endl;  
  }
  }
}
