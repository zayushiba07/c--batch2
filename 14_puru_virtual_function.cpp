#include<iostream>

using namespace std;

class shape
{
public:
    virtual float area()=0;   // must be public
};

class tringle:public shape
{
private:
    float base,height;
public:
    tringle(float b,float h)
    {
        base = b;
        height = h;
    }
    float area()
    {
        float result = 0.5*base*height;
        return result;
    }
    void display()
    {
        cout<<"Triangle result is : "<<area()<<endl;
    }
};

class rectangle:public shape
{
private:
    float height,width,result;
public:   
    rectangle(float h,float w)
    {
        height = h;
        width = w;
    }
    float area()
    {
        result = width * height;
        return result;
    }
    void recshow()
    {
        cout<<"Rectangle result : "<<area()<<endl; 
    }
};

int main()
{
    float h,w,b;
    cout<<"Enter height :";
    cin>>h;
    cout<<"Enter width :";
    cin>>w;
    cout<<"Enter Base :";
    cin>>b;

    tringle t1(b,h);
    rectangle r1(h,w);

    shape* s1;

    s1 = &t1;
    cout<<" Triangle area : "<<s1->area()<<endl;
    t1.display();

    s1 = &r1;
    cout<<" Rectangle area : "<<s1->area()<<endl;
    r1.recshow();

    return 0;
}
