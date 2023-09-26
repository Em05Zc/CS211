/*****************************************************
* Assignment : 1  part 1*
* Name : Emmanuel Zacharioudakis *
* Student ID : 002351794 *
* Date : 25/9/2023 *
* This is a calculator which calculates the quadratic roots of three given numbers *
******************************************************/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void roots(double x, double y, double z){
    cout << fixed << setprecision(2);
    double x1, x2;
    x1 = (-y + sqrt(pow(y, 2) + (-4) * x * z)) / (2 * x);
    x2 = (-y - sqrt(pow(y, 2) + (-4) * x * z)) / (2 * x);

    cout << "The root x1 is: " << x1 << endl << "The root x2 is: " << x2 << endl;
}

int main(){
    cout << "This is a program which calculates the quadratic roots!!!" << endl;
    double a, b, c;

    cout << "Type in a number for a..." << endl;
    cin >> a;

    cout << "Type in a number for b..." << endl;
    cin >> b;

    cout << "Type in a number for c..." << endl;
    cin >> c;

    roots(a, b, c);

    return 0;
}