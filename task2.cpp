#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
    ofstream f ;
    f.open("file.txt", ios::out |ios::app);
    f << "section2";
    f.close();
    return 0 ;
}