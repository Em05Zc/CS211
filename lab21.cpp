#include <iostream>
#include <iomanip>

using namespace std;

void coupon(double x, double y){
    cout << fixed << setprecision(2);

    double sum = x + y;
    const double coupon= 0.90;
    string ans;

    cout << "Do you have a coupon? (Y/N)" << endl;
    cin >> ans;

    if (ans == "Y"){
        sum = sum * coupon;
        cout << "Your total is: " << sum << endl;
    }

    else{
        cout << "Yours total is: " << sum << endl;
    }

}

int main(){
    cout << fixed << setprecision(2);

    double a, b;

    cout << "Type in the price of the first product" << endl;
    cin >> a;

    cout << "Type in the price of the second product" << endl;
    cin >> b;

    coupon(a, b);
}