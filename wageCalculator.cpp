/*****************************************************
* This is a wage calculator system which works using the user's inputs *
******************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

void calculator(string a, int b, double d){
    cout << fixed << setprecision(2);
    double grossPay, unionDues, employmentInsurance, taxes, netPay, totalDeductions, HoursWorked;

    const double unionDuesRate = 0.01;
    const double employmentInsuranceRate = 0.024;
    const double taxesRate = 0.17;

    HoursWorked = b;
    grossPay = HoursWorked * d;
    unionDues = grossPay * unionDuesRate;
    employmentInsurance = grossPay * employmentInsuranceRate;
    taxes = grossPay * taxesRate;
    totalDeductions = unionDues + employmentInsurance + taxes;
    netPay = grossPay - totalDeductions;

    cout << endl << setw(90) << left << "Employee Name: " << right << a << endl << setw(90) << left << "Hours Worked: " << right << b << endl;
    cout << setw(90) << left << "Hourly Rate: " << right << d << endl << endl << setw(90) << left << "Gross Pay: " << right << grossPay << endl << endl;
    cout << "Deductions: " << endl << setw(83) << left << "\tUnion Dues: " << right << unionDues << endl << setw(83) << left << "\tEmployment Insurance: " << right << employmentInsurance << endl <<setw(83) << left << "\tTaxes: " << right << taxes << endl << endl;
    cout << setw(90) << left << "Total deductions: " << right << totalDeductions << endl << endl;
    cout << setw(90) << left << "Net Pay: " << right << netPay;

}

int main(){
    cout << setw(90) << right << "This is a program which calculates your monthly payment" << endl;

    string employeeName;
    int hoursWorked;
    double hourlyRate;

    cout << "Type your name..." << endl;
    cin >> employeeName;

    cout << "Type the hours you worked..." << endl;
    cin >> hoursWorked;

    cout << "Type your hourly rate..." << endl;
    cin >> hourlyRate;

    calculator(employeeName, hoursWorked,  hourlyRate);

    return 0;
}
