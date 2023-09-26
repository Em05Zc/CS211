#include <iostream>
#include <wageCalculator.cpp>
using namespace std;

int main(){
  cout << "This is an experiment" << endl;
  string name;
  int hours;
  double hourlyRate;

  cout << "Type in your name" << endl;
  cin >> name;

  cout << "Type in your hours" << endl;
  cin >> hours;

  cout << "Type in your hourly rate" << endl;
  cin >> hourlyRate;

  calculator(name, hours, hourlyRate);
  return 0;
}
