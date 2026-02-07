#ifndef MSTRING_H 
#define MSTRING_H 

#include <string>
using namespace std;

class MString {
private:
    string value; 

public:
    void setValue(const string& newValue); 
    string getValue() const;                
    int length() const;                   
    void removeFive();                      
};

#endif