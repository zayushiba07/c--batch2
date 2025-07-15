#include<iostream>
#include<string>  // Required for using string
using namespace std;

int main()
{
    int a;
    string result;  // use string instead of char

    cout << "Enter any number :";
    cin >> a;

    result = (a % 2 == 0) ? "even number" : "odd number";

    cout << "Result is: " << result << endl;
    return 0;
}
