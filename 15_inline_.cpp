#include<iostream>
using namespace std;

class maxno
{
    private:
        int no1,no2;
    public:
        void get()
        {
            cout<<"Enter no1:";
            cin>>no1;
            cout<<"Enter no2:";
            cin>>no2;
        }
       inline void diplay()
       {
            cout<<"no 1 :"<<no1<<endl;
            cout<<"no 2 :"<<no2<<endl;
            large();
       }
       void large()
       {
            if(no1>no2)
            {
                cout<<"no 1 is greater";
            }
            else
            {
                cout<<"no2 is greater";
            }
       }
};
int main()
{
    maxno m1;
    m1.get();
    m1.diplay();
    return 0;   
}

