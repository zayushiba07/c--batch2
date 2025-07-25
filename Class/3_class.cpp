#include<iostream>
#include<string>
using namespace std;
class student 
{
    public:
       int s_no,subject[5],avg,tot=0;
       string s_name;
       void getdata();
       void putdata();
};
void student :: getdata()
{
    cout<<"Enter student roll no :";
    cin>>s_no;
    cout<<"Enter student name :";
    cin>>s_name;
    for(int i=0;i<5;i++)
    {
        cout<<"Enter subject marks ["<<i+1<<"]";
        cin>>subject[i];
        tot+=subject[i];
    }
    avg=tot/5;
}
void student::putdata()
{
    cout<<"student roll no :"<<s_no<<endl;
    cout<<"Student name :"<<s_name<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<"subject marks ["<<i+1<<"]"<<subject[i]<<endl;
    }
    cout<<"total is :"<<tot<<endl;
    cout<<"Avg is :"<<avg<<endl;
}
int main()
{
    student std1;
    std1.getdata();
    std1.putdata();
    return 0;
}