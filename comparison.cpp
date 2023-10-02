#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    cout << fixed << setprecision(2);
    double a, b, c;
    double max  = 0;

    cout << "Type in the first value" << endl;
    cin >> a;

    cout << "Type in the second value" << endl;
    cin >> b;

    cout << "Type in the third value" << endl;
    cin >> c;

    double numbers[3] = {a, b, c};
    max=a;
    for (double number : numbers) {
        if(max < number){
            max = number;
        }
    }

    cout << "The largest value is: " << max << endl;
}