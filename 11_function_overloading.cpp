#include<iostream>

using namespace std;

class functionoverloading
{
    public:
        int sum(int n1,int n2)
        {
            return n1+n2;
        }
        float sum(float n1,float n2)
        {
            return n1+n2;
        }
        int sum(int n1,int n2,int n3)
        {
            return n1+n2+n3;
        }
    
};

int main()
{
    int a,b,c,d;
    cout<<"Enter number 1:";
    cin>>a;
    cout<<"Enter number 2:";
    cin>>b;
    cout<<"Enter number 3:";
    cin>>c;
    cout<<"Enter number 4:";
    cin>>d;
    functionoverloading f1;
    cout<<f1.sum(a,b)<<endl;
    cout<<f1.sum(a,b,d)<<endl;
    cout<<f1.sum((float)c,(float)d)<<endl;
    return 0;
}