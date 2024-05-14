// read char by char
#include <iostream>
#include<string>
#include <fstream>
using namespace std;
int main(){
    char ch;
    fstream f;
    f.open("file.txt", ios::in);
    while(f >>ch){
        cout << ch << endl;
    }
    f.close();
    return 0;

}

// read word by word
#include <iostream>
#include <fstream>
#include <string>
using namespace std ;
int main(){
    string data;
    ifstream f ;
    f.open("file.txt", ios::in);
    while(f >>data){
        cout << data << endl ;
    }
    f.close();
    return 0 ;
}

// read line by line
#include <iostream>
#include <fstream>
#include <string>
using namespace std ;
int main(){
    int i =0 ;
    string data;
    ifstream f ;
    f.open("file.txt", ios::in);
    while(getline(f, data)){
        cout << data << endl ;
        i++;
    }
    f.close();
    return 0 ;
}

// is open function
#include <iostream>
#include <fstream>
#include <string>
using namespace std ;
int main(){
    string str;
    fstream f;
    f.open("file.txt",ios::in);
    if (f.is_open()){
        f >> str ;
        cout << str << endl;
    }
    else
        cout << "file is not found" << endl;
    f.close()
    return 0 ;    
}