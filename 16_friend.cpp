#include<iostream>
#include<string>
using namespace std;

class product 
{
    private:
        int price,qty,p_id;
        string p_name;
    public:
        void getdata()
        {
            cout<<"Enter product id :";
            cin>>p_id;
            cout<<"Enter product name :";
            cin>>p_name;
            cout<<"Enter product price :";
            cin>>price;
            cout<<"Enter product qty :";
            cin>>qty;
        }
        void showbill()
        {
            cout<<"Product id :"<<p_id<<endl;
            cout<<"Product name :"<<p_name<<endl;
            cout<<"Product price :"<<price<<endl;
            cout<<"Product qty :"<<qty<<endl;
        }
        friend void sum(product p1)
        {
            int total = p1.price * p1.qty;
            cout<<"Total is :"<<total<<endl;
        }
};
int main()
{
    product p2;
    p2.getdata();
    p2.showbill();
    sum(p2);
    return 0;
}