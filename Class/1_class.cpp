#include<iostream>
#include<string>
using namespace std;

class employee
{
    public:
        int e_no,salary;
        string e_name;
        void putdata();
        void getdata();
};
void employee :: putdata()
{
    cout<<"Enter empolyee no :";
    cin>>e_no;
     cout<<"Enter empolyee name :";
    cin>>e_name;
     cout<<"Enter empolyee salary :";
    cin>>salary;
}
void employee :: getdata()
{
    cout<<"Employee no is :"<<e_no<<endl;
    cout<<"Employee name is :"<<e_name<<endl;
    cout<<"Employee salary is :"<<salary<<endl;
}
int main()
{
    employee e1,e2;
    cout<<".....object 1 is called....."<<endl;
    e1.putdata();
    e1.getdata();
    cout<<".....object 2 is called....."<<endl;
    e2.putdata();
    e2.getdata();
    return 0;
}