
#include<iostream>
using namespace std;

class cube
{
    private:
        int number;
    public:
        cube()
        {
            cout<<"defult constructor"<<endl;
            cout<<"***************************"<<endl;
            cout<<"Enter cube :";
            cin>>number;
        }
        cube(int c)
        {
            cout<<"parameterized constructor"<<endl;
            cout<<"******************************"<<endl;
            number=c;
        }
        void display()
        {
            cout<<"number is :"<<number<<endl;
            cout<<"cube is :"<<number*number*number<<endl;
        }
};

int main()
{
    cube c1;
    c1.display();
    cube c2(20);
    c2.display();
    return 0;
}