#include <iostream>
#include "MString.h"
using namespace std;

int main() {
    string input;

    cout << "Введіть, будь ласка, рядок з цифр: ";
    cin >> input;

    MString myString;         
    myString.setValue(input);

    cout << "Початковий рядок: " << myString.getValue() << endl;
    cout << "Довжина рядка: " << myString.length() << endl;

    myString.removeFive();    

    cout << "Рядок після видалення '5': " << myString.getValue() << endl;
    cout << "Довжина рядка після видалення '5': " << myString.length() << endl;

    return 0;
}