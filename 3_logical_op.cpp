#include<iostream>

using namespace std;

int main()
{
    int num1,num2,num3,num4;
    cout << "Enter the num1: ";//10
    cin >> num1;
    cout << "Enter the num2: ";//20
    cin >> num2;
    cout << "Enter the num3: ";//30
    cin >> num3;
    cout << "Enter the num4: ";//40
    cin >> num4;

    cout<<"logical :"<<(num1==num2 && num3==num4)<<endl;//1,0,0
    cout<<"Or :"<<(num1==num2 || num3==num4)<<endl;//1,1,0
    cout<<"Not :"<<!(num1==num2 && num3==num4)<<endl;//0,1,1

    return 0;

}