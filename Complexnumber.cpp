#include<iostream>
using namespace std;

class Complex{
   int real, img;

   public:
       void setter(){
            cout<<"Enter the real number: ";
            cin>>real;
            cout<<"Enter the imaginary number: ";
            cin>>img;
       }

       void display(){
            cout<<"Complex number: "<<real<<"+"<<img<<"i"<<endl;
       }

       void add(Complex ob1, Complex ob2){
            real = ob1.real + ob2.real;
            img = ob1.img + ob2.img;

            cout<<"Result: "<<real<<"+"<<img<<"i"<<endl;
       }

};

int main()
{
    Complex ob1,ob2,ob3;
    ob1.setter();
    ob2.setter();
    ob1.display();
    ob2.display();
    ob3.add(ob1,ob2);
}
