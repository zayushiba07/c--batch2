#include<iostream>

using namespace std;

int main()
{
    int no1,no2;
    cout<<"Enter the Number1 :";
    cin>>no1;
    cout<<"Enter the number2 :";
    cin>>no2;
    cout<<"bitwise And :"<<(no1 & no2)<<endl;
    cout<<"bitwise Or :"<<(no1 | no2)<<endl;
    cout<<"bitwise Xor :"<<(no1 ^ no2)<<endl;
    cout<<"bitwise Not :"<<(~(no1 & no2))<<endl;
    cout<<"left Shift :"<<(no1<<2)<<endl;
    cout<<"right Shift :"<<(no1>>2)<<endl;
    return 0;
}