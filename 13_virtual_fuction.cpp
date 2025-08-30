#include<iostream>
using namespace std;

class details {
protected:
    string name;
    int age;
    float weight;
public:
    void getdata() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter weight: ";
        cin >> weight;
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Weight: " << weight << " kg" << endl;
    }
};

class basicSalary : virtual public details {
protected:
    float basicsalary;
public:
    void getSalary() {
        cout << "Enter basic salary: ";
        cin >> basicsalary;
    }
    void displaySalary() {
        cout << "Basic Salary: " << basicsalary << endl;
    }
    float Setsalary() {
        return basicsalary;
    }
};

class tada : virtual public details {
protected:
    float ta, da;
public:
    void gettada(float bs) {
        ta = bs * 0.12;  // 12% of basic salary
        da = bs * 0.10;  // 10% of basic salary
    }
    void displaytada() {
        cout << "TA: " << ta << endl;
        cout << "DA: " << da << endl;
    }
    float getta() { 
        return ta;
     }
    float getda() { 
        return da; 
    }
};

class salary : public basicSalary, public tada {
protected:
    float bonus, totalSalary;
public:
    void calculateSalary() {
        gettada(Setsalary());  
        bonus = Setsalary() * 0.05; 
        totalSalary = Setsalary() + getta() + getda() + bonus;
    }
    void displayTotal() {
        display();
        displaySalary();
        displaytada();
        cout << "Bonus: " << bonus << endl;
        cout << "Total Salary: " << totalSalary << endl;
    }
};

int main() {
    salary emp;
    emp.getdata();
    emp.getSalary();
    emp.calculateSalary();
    emp.displayTotal();
    return 0;
}
