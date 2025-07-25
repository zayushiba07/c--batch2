#include<iostream>
using namespace std;

class cal
{
    private:
        int length,width;
    public:
        cal()
        {
            cout<<"defult constructor"<<endl;
            cout<<"***************************"<<endl;
            cout<<"Enter length :";
            cin>>length;
            cout<<"Enter width :";
            cin>>width;
        }  
        cal(int l,int w)
        {
            cout<<"parameterized constructor"<<endl;
            cout<<"******************************"<<endl;
            length=l;
            width=w;
        }
        void display()
        {
            cout<<"length is :"<<length<<endl;
            cout<<"width is :"<<width<<endl;
            cout<<"total is :"<<length*width<<endl;
        }
};

int main()
{
    cal c1;
    c1.display();
    cal c2(80,90);
    c2.display();
    return 0;
}