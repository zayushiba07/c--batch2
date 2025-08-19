#include<iostream>
using namespace std;
class kilo
{
    private:
        int gram;
    public:
        kilo()
        {
            cout<<"Defult constructor";
            cout<<"Enter gram :";
            cin>>gram;
        }
        int getkilo()
        {
            return gram/1000;
        }
        void cal()
        {
            cout<<"kilo gram is :"<<getkilo()<<endl;
        }
};
class ton:public kilo
{
    public:
        void cal_ton()
        {
            cout<<"ton is :"<<getkilo()/1000<<endl;
        }
};
int main()
{
    ton t1;
    t1.cal();
    t1.cal_ton();
    return 0;
}