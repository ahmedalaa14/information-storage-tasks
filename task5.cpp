/*

#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main() {
    char ch;
    int pos;
    ifstream file;
    file.open("file.txt");

    cout << file.tellg() << endl; // get position of pointer

    // read char by char
    while (!file.eof()) {
        pos = file.tellg(); // get position of pointer
        if (file.fail())
            break;
        file.get(ch); // read the character from the file
        cout << "Char : " << ch << " ";
        cout << "Position :" << pos << endl;
    }

    file.close();
    return 0;
}
// get position (write)
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
    string str ;
    int pos;
    ofstream f;
    f.open("file.txt");
    cout << f.tellp()<< endl;
    cout << "Enter data: ";
    cin >> str;
    f << str ;
    pos = f.tellp();
    cout << "Position: " << pos << endl;
    f.close();
    return 0;
}

*/

/**************** seekg from begging(read) ***/

/*
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
char ch;

ifstream file;
file.open("a.txt");
file.seekg(4,ios::beg);
file >> ch;
cout << ch << endl;

file.close();
system("pause");
}

*/

/**************** seekp from end *******/
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
fstream file;
file.open("file.txt",ios::out);
file<<"hello world";

file.seekp(2,ios::beg);
file<<"this is section";

cout <<file.tellp()<<endl;
file.close();
system("pause");
}