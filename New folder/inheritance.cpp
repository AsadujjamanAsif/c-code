#include<iostream>
using namespace std;
class person
{
public:
    string name;
    int age;
    void dispaly1()
    {

        cout <<"Name:"<<name<<endl;
        cout<<"Age:"<<age<<endl;
    }
};
class student : public person
{
public:
    int id;
    void dispaly2()
    {
        cout <<"Id:"<<id<<endl;
       dispaly1();

    }
};
int main()
{
    student s1;
    s1.id=170;
    s1.name="Asif";
    s1.age=22;
    s1.dispaly2();
}
