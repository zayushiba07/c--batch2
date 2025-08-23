#include<iostream>
#include<string>
using namespace std;

class account
{
    protected:
        string name;
        double balance,acc_no;
    public:
        account(double a,string n,double b)
        {
            name = n;
            acc_no = a;
            balance = b;
        }
        void display()
        {
            cout<<"accout holder Name is  :"<<name<<endl;
            cout<<"accout holder account number is  :"<<acc_no<<endl;
            cout<<"accout holder account balance is  :"<<balance<<endl;
        }
};
class saving_account : public account
{
        public:
            saving_account(double a,string n,double b):account(a,n,b)
            {}
            void countsaving()
            {
                double saving = balance * 0.04;
                cout<<"saving account :"<<saving<<endl;
            }
};
class currentsaving:public account
{
    public:
    currentsaving(double a,string n,double b):account(a,n,b)
            {}
        void check()
        {
            if(balance < 5000)
            {
                cout<<"less then 5000 saving";
            }
            else
            {
                cout<<"greter then 5000 saving";
            }
        }
};

int main()
{
    saving_account s1(102025,"Ayushiba",50000);
    currentsaving c1(633565,"krushanraj",4000);
    s1.display();
    s1.countsaving();
    c1.display();
    c1.check();
    return 0;
}