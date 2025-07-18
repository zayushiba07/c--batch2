#include<iostream>
#include<string>
using namespace std;

int main()
{
    int size;
    cout<<"Enter size of Array :";
    cin>>size;

    int* eid = new int[size]; 
    string* ename = new string[size];
    int* salary = new int[size];

    for(int i=0;i<size;i++)
    {
        cout<<"Enter Employee id :";
        cin>>eid[i];
        cout<<"Enter Employee name :";
        cin>>ename[i];
        cout<<"Enter Employee salary :";
        cin>>salary[i];
    }

    cout<<"eid \t ename \t Salary"<<endl;

    for(int i=0;i<size;i++)
    {
        cout<<eid[i]<<"\t";
        cout<<ename[i]<<"\t";
        cout<<salary[i]<<endl;
    }
    return 0;
}