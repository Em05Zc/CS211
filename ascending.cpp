#include <iostream>

using namespace std;

int main(){
    double a, b, c;

    cout << "Type in a number" << endl;
    cin >> a;

    cout << "Type in a number" << endl;
    cin >> b;

    cout << "Type in a number" << endl;
    cin >> c;

    if (a > b && b > c){
        cout << "The numbers are in descending order" << endl;
    }

    else if (a < b && b < c){
        cout << "The numbers are in ascending order" << endl;
    }

    else{
        cout << "The numbers are in random order" << endl;
    }
}