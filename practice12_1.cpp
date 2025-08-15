#include<iostream>
using namespace std;

int main()  {
  int n;
  cout << "Enter number of elements: " ;
  cin >> n;
  int element[100];
  
    //input elements
  int i;
  for(i=0;i<n;i++)  {
    cout << "Enter number " << i+1 << ": ";
    cin >> element[i];
  } 
  
    //max and min
  int max=element[0], min=element[0];
  for(int j=1;j<n;j++) {
    if(max<element[j]) 
      max=element[j]; 
    if(element[j]<min)
      min=element[j];
    }
  
    //print max/min and positions
      cout << "Maximum number is: " << max << endl; 
      cout << "Position(s): ";
    for(int j=0;j<n;j++)  {
       if(element[j]==max)  
        cout << j << " ";  }  //array indexes start from 0
  
      cout << endl;
  
      cout << "Minimum number is: " << min << endl;  
      cout << "Position(s): ";
    for(int j=0;j<n;j++) {
       if(element[j]==min) 
        cout << j << " ";  }
    }
