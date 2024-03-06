#include<iostream>
using namespace std;

class A{
public:
    void dispaly1(){
    cout<<"AAA:"<<endl;
    }
};
class B{
public:
    void dispaly2(){
    cout<<"BBB:"<<endl;
    }
};

class student:public A, public B{
public:
    void dispaly3(){
    cout<<"AABB:"<<endl;
    }
};



int main()
{
    student ob;
    ob.dispaly1();
    ob.dispaly2();
    ob.dispaly3();

}
