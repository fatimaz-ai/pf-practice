#include <iostream>
using namespace std;
int main() {
  // a program for using arithmetic operators
  int a, b;
  char op;
  cout << "enter 1st number:" << endl;
  cin >> a;
  cout << "enter 2nd number:" << endl;
  cin >> b;
  cout << "type the operator you want to use" << endl;
  cin >> op;
  switch (op) {
  case '+':
    cout << a + b << endl;
    break;
  case '-':
    cout << a - b << endl;
    break;
  case '*':
    cout << a * b << endl;
    break;
  case '/':
    cout << a / b << endl;
    break;
  case '%':
    cout << a % b << endl;
    break;
  default:
    cout << "invalid operator";
  }
}