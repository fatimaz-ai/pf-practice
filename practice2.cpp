#include <iostream>
#include <string>
using namespace std;
int practice2() {
  // variables
  string name;
  int age, marks1, marks2, total;
  cout << "enter name:" << endl;
  cin >> name;
  cout << "enter your age:" << endl;
  cin >> age;
  cout << "enter eng marks:" << endl;
  cin >> marks1;
  cout << "enter maths marks:" << endl;
  cin >> marks2;
  total = marks1 + marks2;
  cout << "total marks are:" << total;
  return 0;
}
