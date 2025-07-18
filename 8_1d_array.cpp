#include<iostream>
#include<string>
using namespace std;

int main()
{
    int size = 5;

    int eid[size] = {101, 102, 103, 104, 105};
    string ename[size] = {"poonam", "ankit", "rajesh", "nikita", "manish"};

    cout << "eid \t ename " << endl;

    for(int i = 0; i<size; i++)  // Correct loop range
    {
        cout << eid[i] << "\t" << ename[i] << endl;
    }

    return 0;
}
