#include<iostream>
using namespace std;

class A {
public:
    void display1(){
    cout<<"CLASS A"<<endl;
    }
};
class B:public A{
public:
    void display2(){
    cout<<"CLASS B"<<endl;
    }
};
class C:public A{
public:
    void display3(){
    cout<<"CLASS C"<<endl;
    }
};

int main()
{
    B ob1;
    C ob2;
    ob1.display1();
    ob2.display1();
    ob1.display2();
    ob2.display3();

}

