
#include<iostream>
using namespace std;

class Student{
    string name;
    int age;
    float marks[3], total=0, avg=0;

public:
    void setValues(){
        cout<<"Enter the student name: ";
        cin>>name;
        cout<<"Enter age: ";
        cin>>age;
        cout<<"Enter marks of 4 subjects: ";
        for(int i = 0; i<=3 ; i++){
            cin>>marks[i];
        }
    }

    void totalMark(){
        for(int i = 0; i<=3;i++){
            total = total + marks[i];
        }
    }

    void average(){
        avg = total/4;
    }
      void display(){
        cout<<endl<<"Student Name: "<<name<<endl;
        cout<<"Student Age: "<<age<<endl;
        cout<<"Total Mark "<<total<<endl;
        cout<<"Average: "<<avg;
      }
};

int main(){

    Student ob;
    ob.setValues();
    ob.display();
    ob.totalMark();
    ob.average();
    ob.display();

}

