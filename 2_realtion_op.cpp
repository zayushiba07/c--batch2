#include<iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout << "Enter the num1: ";//10
    cin >> num1;
    cout << "Enter the num2: ";//5
    cin >> num2;

    cout << "Equal to: " << (num1 == num2) << endl;//1,0
    cout << "Not equal to: " << (num1 != num2) << endl;//0,1
    cout << "Greater then :" << (num1 > num2) << endl;//0,1
    cout << "Less then :" << (num1 < num2) << endl;//0,0
    cout << "Less then equal:" << (num1 <= num2) << endl;//1,0
    cout << "Greater then equal:" << (num1 >= num2) << endl;//1,1
    return 0;
}
