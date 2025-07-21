
#include<iostream>
using namespace std;

int main()
{
    int row=2;
    int column=2;

    int arr[row][column];

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<"Enter arr "<<j+1<<":";
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<arr[i][j]<<endl;
        }
    }
    return 0;
}