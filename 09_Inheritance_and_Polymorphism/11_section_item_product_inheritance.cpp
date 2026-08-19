# include <iostream>
using namespace std;
 
/*
class Person {
    private:
        string name;
        int age;

    public:
        Person(): name("Unknown"), age(0) {}
        Person(string n, int a): name(n), age(a) {}
        string get_name(){return name;}
        int get_age(){return age;}
        void print_info(){
            cout << "Name => " << name << endl;
            cout << "Age => " << age << endl;
        }

};


class Employee : public Person {
    private:
        int employeeID;
        double salary;

    public:
        Employee(): employeeID(0), salary(0.0) {}
        Employee(string n, int a, int ei, double s) : Person(n, a) {
            employeeID = ei;
            salary = s;
        }
        int get_employeeid(){return employeeID;}
        double get_salary(){return salary;}
        void print_info(){
            Person :: print_info();
            cout << "Employee ID => " << employeeID << endl;
            cout << "Salary => " << salary << endl;
        }

};
*/

class Item{
    private:
        int itemID;
        string name;

    public:
        Item(): itemID(0), name("Unknown") {}
        Item(int i, string n) : itemID(i), name(n) {}
        int get_itemID(){return itemID;}
        string get_name(){return name;}

        void printInfo(){
            cout << "Item ID => " << itemID << endl;
            cout << "Item Name => " << name << endl;
        }
};

class Product: public Item {
    private:
        double price;
        int quantity;

    public:
        Product(): price(0), quantity(0) {}
        Product(int i, string n, double p, int q): Item(i, n){
            price = p;
            quantity = q;
        }
        double get_price(){return price;}
        int get_quantity(){return quantity;}
        void printInfo() {
            Item :: printInfo();
            cout << "Price => " << price << endl;
            cout << "Quantity => " << quantity << endl;
            cout << "=================================\n";
        }

};


int main(){

    // Employee e1;
    // Employee e2("Ahmed", 22, 1, 9000.0);
    // e1.print_info();
    // e2.print_info();
    //---------------------------------------
    Product p1;
    Product p2(101, "Laptop", 30000, 5);
    p1.printInfo();
    p2.printInfo();

    return 0;
}