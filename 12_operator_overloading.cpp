#include<iostream>
using namespace std;

class minplus
{
private:
    int x[5];
public:
    minplus();              
    minplus operator+();    // unary + overloading
    minplus operator-();    // unary - overloading
    void display();
};


minplus::minplus()
{
    for(int i = 0; i < 5; i++)
    {
        cout << "Enter number " << i + 1 << ": ";
        cin >> x[i];
    }
}

void minplus::display()
{
    for(int i = 0; i < 5; i++)
    {
        cout << "Number " << i + 1 << ": " << x[i] << endl;
    }
}


minplus minplus::operator+()
{
    minplus temp;   
    for(int i = 0; i < 5; i++)
    {
        temp.x[i] = this->x[i] + 2;  
    }
    return temp;
}


minplus minplus::operator-()
{
    minplus temp;
    for(int i = 0; i < 5; i++)
    {
        temp.x[i] = this->x[i] - 2;  
    }
    return temp;
}

int main()
{
    minplus m1;   
    cout << "\nDisplaying m1:" << endl;
    m1.display();
    
    minplus m2 = +m1;   
    cout << "\nDisplaying m2 (m1 with +2 to each element):" << endl;
    m2.display();

    minplus m3 = -m1;   
    cout << "\nDisplaying m3 (m1 with -2 to each element):" << endl;
    m3.display();
    
    return 0;
}
