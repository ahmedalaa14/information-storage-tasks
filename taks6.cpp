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
return 0;
}