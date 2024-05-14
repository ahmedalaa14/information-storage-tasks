// write in a file using ofstream
/*
#include <iostream>
#include <fstream>
using namespace std ;
int main(){
    ofstream f ;
    f.open("file.txt", ios::out);
    f << "Hello World" << endl ;
    f.close();
    return 0 ;
}
*/
//read in a file using ifstream
#include <iostream>
#include <fstream>
using namespace std ;
int main(){
    string data;
    ifstream f ;
    f.open("file.txt", ios::in);
    f >>data;
    cout << data << endl ;
    f.close();
    return 0 ;

}