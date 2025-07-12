#include<iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout << "Enter the num1: ";//10
    cin >> num1;
    cout << "Enter the num2: ";//5
    cin >> num2;

    cout<<"add equal to :"<<(num1+=num2)<<endl;//num1=num1+num2;
    cout<<"sub equal to :"<<(num1-=num2)<<endl;//num1=num1-num2;
    cout<<"div equal to :"<<(num1/=num2)<<endl;//num1=num1/num2
    cout<<"mul equal to :"<<(num1*=num2)<<endl;//num1=num1*num2
    cout<<"mod equal to :"<<(num1%=num2)<<endl;//num1=num1%num2
    return 0;
}