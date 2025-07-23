#include<iostream>
#include<string>
using namespace std;

class product {
public:
    int p_id, price, qty, total, t_qty;
    string p_name;

    void getdata();
    void putdata();
    void display();
    void sum(product p1, product p2);
};

void product::getdata() {
    cout << "Enter product id: ";
    cin >> p_id;
    cout << "Enter product name: ";
    cin >> p_name;
    cout << "Enter product price: ";
    cin >> price;
    cout << "Enter product qty: ";
    cin >> qty;
}

void product::putdata() {
    cout << "Product ID: " << p_id << endl;
    cout << "Product Name: " << p_name << endl;
    cout<< "Product price :" << price << endl;
    cout<< "Product qty :" << qty << endl;
}

void product ::display()
{
     cout<<"================================================="<<endl;
     cout << "Total of Product Price: " << total << endl;
    cout << "Total of Product Qty: " << t_qty << endl;
}

void product::sum(product p1, product p2) {
    total = p1.price + p2.price;
    t_qty = p1.qty + p2.qty;
}

int main() {
    product pro1, pro2, proSum;

    cout << "Enter details for Product 1:\n";
    pro1.getdata();
    pro1.putdata();
    cout << "\nEnter details for Product 2:\n";
    pro2.getdata();
    pro2.putdata();
    proSum.sum(pro1, pro2);
    cout << "\nSum of Product 1 and Product 2:\n";
    proSum.display();

    return 0;
}
