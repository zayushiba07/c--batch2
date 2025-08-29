#include<iostream>
using namespace std;

class details
{
    protected:
        string name;
        int age;
        float weight;
    public:
        void getdata()
        {
            cout<<"Enter name :";
            cin>>name;
            cout<<"Enter age :";
            cin>>age;
            cout<<"Enter weight :";
            cin>>weight;  
        }
        void display()
        {
            cout<<" name :"<<endl;
            cout<<" age :"<<endl;
            cout<<" weight :"<<endl;
        }
};
class basicSalary : virtual public details
{
    protected:
       double basicsalary;
    public:
        void getSalary()
        {
            cout<<"Enter basic salary :";
            cin>>basicsalary;
        }
        void displaySalary()
        {
            cout<<"Basic salary :"<<endl;
        }
        double salary()
        {
            return basicsalary;
        }
        
};
class tada:virtual public details
{
    protected:
        float ta,da;
    public:
        void gettada(float bs)
        {
            ta = bs*0.12;
            da = bs*0.10;
        }
        void displaytada()
        {
            cout<<"Ta :"<<endl;
            cout<<"DA :"<<endl;
        }
};