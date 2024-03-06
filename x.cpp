#include<iostream>
#include<conio.h>
using namespace std;

class student
{
public :
    int id;
    double gpa;
    void display()
    {
        cout<< id<<endl<<gpa<<endl;
    }
   student(int x, double y)
    {
        id=x;
        gpa=y;
    }
    student()
    {
        cout <<"Default constructor"<<endl;
    }
};
int main()
{
    student ob;
    student Asif(11170, 3.50);
    Asif.display();


    student mim(11171,3.25);
    mim.display();

    getch();
}
