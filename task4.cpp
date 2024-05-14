// Write a program that reads an integer, a floating-point value, 
//and a string from a text file & prints the values to the user.

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    int intValue;
    float floatValue;
    string strValue;

    ifstream f("file.txt");
    if (f.is_open()) {
        f >> intValue >> floatValue >> strValue;
        f.close();

        cout << "Integer: " << intValue << endl;
        cout << "Float: " << floatValue << endl;
        cout << "String: " << strValue << endl;
    } else {
        cout << "Unable to open file.\n";
    }

    return 0;
}