#include<iostream>
#include<string>
using namespace std;

class student {
private:
    int rno, age;
    string name;
public:
    void getdetails() {
        cout << "Enter roll no: ";
        cin >> rno;
        cout << "Enter name: ";
        cin >> name; // Changed to cin >> name
        cout << "Enter age: ";
        cin >> age;
    }
    void displaydetails() {
        cout << "Student roll no: " << rno << endl;
        cout << "Student name: " << name << endl;
        cout << "Student age: " << age << endl;
    }
};

class subject {
protected: 
    int sub1, sub2;
public:
    void getmark() {
        cout << "Enter sub1: ";
        cin >> sub1;
        cout << "Enter sub2: ";
        cin >> sub2;
    }
    void displaymark() {
        cout << "Sub1: " << sub1 << endl;
        cout << "Sub2: " << sub2 << endl;
    }
};

class info : public student, public subject {
private:
    int ans;
public:
    void result() { 
        getmark(); 
        ans = sub1 + sub2; 
    }
    void displayresult() {
        displaydetails();
        displaymark(); 
        cout << "Total marks: " << ans << endl;
    }
};

int main() {
    info obj; 
    obj.getdetails();
    obj.result(); 
    obj.displayresult(); 
    return 0;
}