# include <iostream>
using namespace std;



// problem 1
/*
class Employee {

    private:
        double salary;

    public:
        
        Employee(double salary){this->salary = salary;}

        double operator + (Employee other) const {
            return this->salary + other.salary;
        }
};*/
// --------------------------

// problem 2
/*
class Employee{
    private:
        int id;
        double salary;

    public:
        Employee(int i, double s): id(i), salary(s) {}
        void set_id(int i){id = i;}
        void set_salary(double s){salary = s;}

        int get_id(){return id;}
        double get_salary(){return salary;}

        bool operator == (Employee other) const{
            return this->id == other.get_id();
        }

        bool operator < (Employee other) const {
            return this->salary < other.get_salary();
        }


};*/
// --------------------------

// PROBLEM 3
/**/
class Employee{
    private:
        double salary;

    public:
        Employee(double s): salary(s) {}
        double get_salary(){return salary;}

        Employee operator ++(){
            salary += 100;
            return *this;
        }

        Employee operator ++ (int){
            Employee other(salary);
            salary += 100;
            return other;
        }


};
// --------------------------



int main(){

    // problem 1
    // Employee e1(5000);
    // Employee e2(2000);
    // cout << e1 + e2 << endl;
    // --------------------------
    
    // problem 2
    /*
    Employee e1(1, 5000);
    Employee e2(2, 7000);
    Employee e3(1, 6000);

    cout << (e1 == e2) << endl;
    cout << (e1 == e3) << endl;
    cout << (e1 < e2) << endl;
    */
    // --------------------------
    // problem 2

    Employee e1(1000);
    
    e1++;
    cout << e1.get_salary() << endl;
    ++e1;
    cout << e1.get_salary() << endl;



    return 0;
}