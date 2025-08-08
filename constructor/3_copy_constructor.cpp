#include<iostream>
#include<string>
using namespace std;

class student 
{
    private:
        int rno,marks;
        string name,subject;
    public:
        student();
        student(int,int,string,string);
        student(student&);
        ~student();
        void display();
};

student :: student()
{
    cout<<"default constructor is called...."<<endl;
    cout<<"Enter roll no :";
    cin>>rno;
    cout<<"Enter name :";
    cin>>name;
    cout<<"Enter subject :";
    cin>>subject;
    cout<<"Enter marks:";
    cin>>marks;
}
student :: student(int r,int m,string n,string s)
{
    cout<<"parametrized constructor is called...."<<endl;
    rno = r;
    marks = m;
    name = n;
    subject = s;
}
student :: student(student& s)
{
    cout<<"copy constructor is called...."<<endl;
    rno = s.rno;
    marks = s.marks;
    name = s.name;
    subject = s.subject;
}
student :: ~student()
{
    cout<<"Destructors is called...."<<endl;
}
void student :: display()
{
    cout<<"roll no is :"<<rno<<endl;
    cout<<"name is :"<<name<<endl;
    cout<<"subject is :"<<subject<<endl;
    cout<<"subject marks is :"<<marks<<endl;
}

int main()
{
    student s1,s2(101,56,"utsav","zero"),s3;
    s1.display();
    s2.display();
    s3.display();
    return 0;
}

