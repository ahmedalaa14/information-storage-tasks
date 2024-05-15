// write in abinary file 

/*
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
int age;
ofstream f;


////write age in binary files
f.open("file.txt",ios::binary);

cout<<"enter age"<<endl;
cin>>age;

//f<<age;
f.write((char*)&age,sizeof(age));
f.close();
return 0;
}
*/

//read from binary file

/*

#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    int age ;
    fstream f ;
    f.open("file.txt", ios::in | ios::binary);
    f >> age ;
    f.read((char*)&age,sizeof(age));
    cout << age << endl ;
    f.close();
    return 0;
}

*/

// write array of char and array of int in binary files

#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    char ch[3];
    int arr[3];
    fstream f ;
    f.open("file.txt", ios::out | ios::binary);
    cout << "Enter 3 characters: ";
    for (int i = 0; i < 3; i++){
        cin >> ch[i];
    }
    cout << "Enter numbers: " << endl;
    for ( int i =0; i < 3; i++){
        cin >> arr[i];
    }
    f.write(ch, sizeof(ch));
    f.write((char*)&arr, sizeof(arr));
    f.close();
    return 0;
}

/********read array of char and array of int from binary files******/
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
char ch[3];
int arr[3];

fstream f;
f.open("file.txt",ios::in|ios::binary);
f.read(ch,sizeof(ch));
f.read((char*)arr,sizeof(arr));

for(int i=0;i<3;i++)
{
cout<<ch[i]<<" ";
}
cout<<endl;

for(int i=0;i<3;i++)
{
cout<<arr[i]<<" ";
}
cout<<endl;

f.close();
return 0;
}