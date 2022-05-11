/*
  Write a program that given two numbers as input make the main operations.

  Output:
  Insert first number: 4
  Insert second number: 2

  SUM: 6
  Difference: 2
  Multiplication: 8
  Division: 2
*/
#include <iostream>
using namespace std;
void do_calculus(double n, double m){
  cout << "SUM: " << n + m << endl;
  cout << "Difference: " << n - m << endl;
  cout << "Multiplication: " << n * m << endl;
  cout << "Division: " << n / m << endl;
  return;
}

int main(){
  double n, m;
  cout << "Insert first number: ";
  cin >> n;
  cout << endl << "Insert second number: ";
  cin >> m;

  do_calculus(n, m);
}