#include<iostream>
using namespace std;

class student{

        string name;
        int age;
        float marks[3], total=0, avg=0;
 public:
void setValus(){
cout<<"Enter the student name:";
cin>>name;
cout<<"Enter the age:";
cin>>age;
cout<<"Enter the marks of 4 subject :";
for(int i=0;i<=3;i++){
    cin>>marks[i];
}
}

void totalMark(){
for(int i=0;i<=3;i++)
    total=total+marks[i];
}
void average(){
avg=total/4;
}
void display(){
cout<<endl<<"student name:"<<name<<endl;
cout<<"student age:"<<age<<endl;
cout<<"total marks:"<<total<<endl;
cout<<"average:"<<avg;
}
};

int main(){
    student ob;
    ob.setValus();
    ob.display();
    ob.average();
    ob.totalMark();
    ob.display();

}
