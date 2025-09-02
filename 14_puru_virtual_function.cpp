#include<iostream>

using namespace std;

class shape
{
    virtual float area()=0;
};
class tringle:public shape
{
    private:
        float base,height;
    public:
        shape(float b,float h)
        {

        }
        
};

