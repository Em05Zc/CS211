#include <iostream>

using namespace std;

int main(){
    string character;

    cout << "Type in a character" << endl;
    cin >> character;

    if (character >= "0" && character <= "9"){
        cout << "digit" << endl;
    }

    else if (character >= "a" && character <= "z"){
        cout << "small letter" << endl;
    }

    else if (character >= "A" && character <= "Z"){
        cout << "capital letter" << endl;
    }

    else{
        cout << "funny" << endl;
    }

    return 0;
}
