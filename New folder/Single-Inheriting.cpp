#include<iostream>
using namespace std;

class A{
public:
    void dispaly1(){
    cout<<"A:"<<endl;
    }
};
class B:public A{
public:
    void dispaly2(){
        cout<<"A:"<<endl;
    }

};


int main()
{
    B ob;
    ob.dispaly2();
    ob.dispaly1();

}
