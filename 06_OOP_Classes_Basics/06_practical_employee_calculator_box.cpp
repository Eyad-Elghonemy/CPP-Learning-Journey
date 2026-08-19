# include <iostream>
using namespace std;

class Employee {

    private:
        string name;
        double salary;

    public:
        Employee(){
            name = "Unknown";
            salary = 0;
        }
        Employee(string n, double s){
            name = n;
            salary = s;
        }

        void setName(string n) {name = n;}
        void setSalary() {
            cout << "Enter Salary: " << endl;
            cin >> salary;
        }
        void getName() {cout << "Name: " <<name << endl;}
        void getSalary() {cout << "Salary: " << salary << endl;}
};

class Calculator{
    public:

        int sum(int n1, int n2) {return n1+n2;}
        int sum(int n1, int n2, int n3) {return n1+n2+n3;}

};

class Student{
    private:
        string name;
        int id;
    
    public:
        Student(){
            name = "";
            id = 0;
        }

        void printInfo(){
            cout << "Name: " << endl;
            cout << "ID: " << endl;
        }

};

class Box{
    private:
        float side;

    public:
        void setSide(float s) {side = s;}
        float getSide() {return side;}

};

void showBox(Box b){
    cout << b.getSide() << endl;
}



int main(){
   
    /*
    Employee e1;
    e1.setName("Ali");
    e1.setSalary();
    e1.getName();
    e1.getSalary();
    */

    /*
    Calculator c1;
    cout << c1.sum(3, 6) << endl;
    cout << c1.sum(3, 6, 9) << endl;
    */

    /*
    Student s1;
    s1.printInfo();
    */

    // Box b;
    // b.setSide(30);
    // showBox(b);





    return 0;
}
