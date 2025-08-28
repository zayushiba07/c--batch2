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
            cout<<"First name : "<<fname<<endl;
            cout<<"Last name  : "<<lname<<endl;
            cout<<"Middle name: "<<mname<<endl;
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
        cout<<"Item 1 : "<<item1<<endl;
        cout<<"Item 2 : "<<item2<<endl;
        cout<<"Item 3 : "<<item3<<endl;
        cout<<"Total  : "<<total<<endl;
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
            tax1 = total*0.30;
        }
        void taxdisplay()
        {
            cout<<"Tax is : "<<tax1<<endl;
        }
};
class printbill :public tax
{
    protected:
        float netbill;
    public:
        printbill(string f,string l,string m,int i1,int i2,int i3):tax(f,l,m,i1,i2,i3)
        {
            netbill = tax1 + total;
        }
        void displaybill()
        {
            cout<<"Net Bill is : "<<netbill<<endl;
        }
};

int main()
{
    
    printbill p1("Ayushiba","Zala","S.",100,200,300);

    p1.display();       // from info
    p1.itemdisplay();   // from item
    p1.taxdisplay();    // from tax
    p1.displaybill();   // from printbill

    printbill p2("Tatsat","Ghori","Y.",500,300,700);
    p2.display();       // from info
    p2.itemdisplay();   // from item
    p2.taxdisplay();    // from tax
    p2.displaybill();   // from printbill

    return 0;
}
