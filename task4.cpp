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

// write char by char
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main(){
    char ch;
    ofstream f;
    f.open("file.txt");
    cout << "enter character data: ";
    cin.get(ch);
    while(ch != '.'){
        f.put(ch);
        cin.get(ch);
    }
    f.close();
    return 0;
}

//copy file
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
    string data;
    ifstream f1;
    ofstream f2;
    f1.open("file.txt", ios::in);
    f2.open("file2.txt", ios::out);
    while(getline(f1, data)){
        f2 << data << endl;
    }
    f1.close();
    f2.close();
    return 0;
}

//copy text file using get , put 
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
    char ch;
    ifstream f1;
    ofstream f2;
    f1.open("file.txt", ios::in);
    f2.open("file2.txt", ios::out);
    while(f1.get(ch)){
        f2.put(ch);
    }
    f1.close();
    f2.close();
    return 0;
}

// fail fnction 
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
    string data;
    ifstream f;
    f.open("file.txt", ios::in);
    if(f.fail()){
        cout << "file not found" << endl;
    }else{
        cout << "success" << endl;
    f.close();
    return 0;
}