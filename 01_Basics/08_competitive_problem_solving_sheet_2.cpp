# include <iostream>
using namespace std;

class Employee{

    private:
        string name;
        float salary;

    public:
        
        void set_name(){
            cout << "Enter Your Name: " << endl;
            cin >> name;
        }

        void set_salary(float s){
            salary = s;
        }

        void get_name(){
            cout << "Name : " << name << endl;
        }

        void get_salary(){
            cout << "salary : " << salary << endl;
        }

};

class Calculator{

    public:
        int sum(int n1, int n2){
            return n1 + n2;
        }

        int sum(int n1, int n2, int n3){
            return n1 + n2 + n3;
        }

};

class Student{

    private:
        string name;
        long int id;

    public:
        Student(): name("Unknown"), id(0){}

        void printInfo(){
            cout << "Name => " << name << endl;
            cout << "ID => " << id << endl;
        }

};

class Box{

    private:
        float side;

    public:
        
        void set_side(float s){
            side = s;
        }

        float get_side(){
            return side;
        }
};


void showBox(Box b){
    cout << "Side => " << b.get_side() << endl;
}

int main(){

    // Employee e1;
    // e1.set_name();
    // e1.set_salary(14000);
    // e1.get_name();
    // e1.get_salary();

    // Calculator c1;
    // cout << "5 + 10 = " << c1.sum(5, 10) << endl;
    // cout << "5 + 10 + 7 = " << c1.sum(5, 10, 7) << endl;

    // Student s1;
    // s1.printInfo();

    Box b1;
    b1.set_side(15.9);
    showBox(b1);
    Box *ptr;
    ptr = & b1;
    ptr->get_side();



    return 0;
}