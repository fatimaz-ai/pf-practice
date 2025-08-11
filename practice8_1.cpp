#include <iostream>
using namespace std;

int sum(int a, int b) {
  int result = a + b;
  return result;
}

void greet() { cout << "Hello user!" <<endl ; }

int main() {
  greet();
  int num1, num2;

  cout << "Please enter 1st number:" << endl;
  cin >> num1;

  cout << "Please enter 2nd number:" <<endl;
  cin >> num2;

  cout << "The total sum is:" << sum(num1, num2) <<endl;
}