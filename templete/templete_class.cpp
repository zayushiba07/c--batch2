#include<iostream>
using namespace std;

template<class t1,class t2,class t3>

class calint
{
    private:
        t1 a;
        t2 b;
        t3 c;
    public:
        calint(t1 x,t2 y,t3 z)
        {
            a=x;
            b=y;
            c=z;
        }
        void sum()
        {
            float result;
            cout<<"a :"<<a<<endl<<"b :"<<b<<endl<<"c :"<<c<<endl;
            result = (a*b*c)/100;
            cout<<"Result :"<<result<<endl;
        }
};
int main()
{
    calint<int,int,int>obj1(80,90,20);
    calint<int,float,int>obj2(80,90.80,20);
    calint<float,float,int>obj3(70.56,90.80,20);
    calint<float,float,float>obj4(70.56,90.80,50.32);
    obj1.sum();
    obj2.sum();
    obj3.sum();
    obj4.sum();
    return 0;
}
