#include<iostream>
#include<string>
using namespace std;

class info
{
    protected:
        string fname,lname,mname;
    public:
        info(string f,string l,string m)
        {
            fname=f;
            lname=l;
            mname=m;
        }
        void display()
        {
            cout<<"==============================="<<endl;
            cout<<"Enter first name :"<<fname<<endl;
            cout<<"Enter last name :"<<lname<<endl;
            cout<<"Enter middle name :"<<mname<<endl;
            cout<<"==============================="<<endl;
        }
};
class item
{
    protected:
       int item1,item2,item3,total=0;
    public:
    item(int i1,int i2,int i3)
     {
        item1 = i1;
        item2 = i2;
        item3 = i3;
        total = item1 + item2 + item3;
     }
     void itemdisplay()
     {
        cout<<"==============================="<<endl;
        cout<<"iteam 1:"<<item1<<endl;
        cout<<"iteam 2:"<<item2<<endl;
        cout<<"iteam 3:"<<item3<<endl;
        cout<<"Total :"<<total<<endl;
        cout<<"==============================="<<endl;
     }

};
class tax:public info,public item
{
    protected:
        float tax1;
    public:
        tax(string f,string l,string m,int i1,int i2,int i3):info(f,l,m),item(i1,i2,i3)
        {
            
        }
};