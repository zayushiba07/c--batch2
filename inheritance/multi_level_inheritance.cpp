#include<iostream>
using namespace std;

class feet 
{
    private:
        float inch;
    public:
        feet()
        {
            inch = 0;
        }
        feet(float i)
        {
            inch = i;
        }
        void showfeet()
        {
            cout<<"feet is :"<<inch/12<<endl;
        }
        float getfeet()
        {
            return inch/12.0;
        }
};
class meter:public feet
{
    private:
        float mt;
    public:
        meter(float i):feet(i)
        {
            mt = i;
        }
        void showmeter()
        {
            cout<<"meter is :"<<getfeet()/0.3048<<endl;
        }
        float getmeter()
        {
            return mt;
        }
};
class kilomt : public meter
{
    private:
        float kilometer;
    public:
        kilomt(float i):meter(i)
        {
            kilometer = i;
        }
        void showkilometer()
        {
            cout<<"kilometer is :"<<getmeter()/1000<<endl;
            showfeet();
            showmeter();
        }
};
int main()
{
    float i;
    cout<<"Enter inch :";
    cin>>i;
    kilomt k(i);
    k.showkilometer();
}