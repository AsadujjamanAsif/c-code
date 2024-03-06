#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    string name;
    int age;
    ofstream file;
    file.open("student-details.txt",ios::out|ios::app);
    for(int i=1; i<=6; i++)
    {
        cout<<"Enter Your Name:";
    getline(cin,name);
    file<<name<<"\t";
    cout<<"Enter Your Age:";
    cin>>age;
    file<<age<<endl;
    cin.ignore();
    }
    cout<<"Data is stored"<<endl;
    file.close();
}
