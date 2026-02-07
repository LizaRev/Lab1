#include "MString.h"

void MString::setValue(const string& newValue) { 
    value = newValue; 
}

string MString::getValue() const {  
    return value;
}

int MString::length() const {
    int count = 0;
    for (char symbol : value) {  
        count++;
    }
    return count;
}

void MString::removeFive() {
    string newValue = "";
    for (char symbol : value) {  
        if (symbol != '5') {
            newValue += symbol;
        }
    }
    value = newValue;           
}