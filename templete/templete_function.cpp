#include<iostream>
using namespace std;

template<class t1,class t2>

void display(t1 a,t2 b)
{
    cout<<"using function templete :"<<endl;
    cout<<"a :"<<a<<endl<<"b: "<<b<<endl;
}

void display(string str1,string str2)
{
    cout<<"using non-templete "<<endl;
    cout<<"str 1 :"<<str1<<endl<<"str 2 :"<<str2<<endl;
}

template<class t1,class t2>

float cal(t1 x,t2 y)
{
    cout<<"using templete function"<<endl;
    cout<<"X :"<<x<<endl<<"Y :"<<y<<endl;
    return x+y;
}
int main()
{
    display(20,50);
    display(20.50,80.65);
    display(string("ayushiba"),string("anushaka"));
    display(12.50,string("anushaka"));
    cout<<"***************************************"<<endl;
    cout<<"sum is  :"<<cal(10,80)<<endl;
    cout<<"sum is  :"<<cal(10.50,80.89)<<endl;
    cout<<"sum is  :"<<cal(10,100)<<endl;
    return 0;

}
