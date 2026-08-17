# include <iostream>
using namespace std;



// struct Employee{
    
//     int emp_no;
//     string emp_name;
//     float emp_salary;
//     float emp_bonus;
//     float emp_net_salary;


//     void print_info(){
//         cout << "Employee Number => " << emp_no << " ,Employee Name => " << emp_name << endl;
//         cout << "Employee Salary => " << emp_salary << " ,Employee Bonus => " << emp_bonus << " ,Employee Net Salary => " << emp_net_salary << endl;
//     }

//     void compare(Employee emp2){
//         if((emp_no == emp2.emp_no) && (emp_name == emp2.emp_name) && (emp_salary == emp2.emp_salary)){
//             cout << "Employee Is Similar To Other Employee\n";
//         }
//         else{
//             cout << "Employee Isn't Similar To Other Employee\n";
//         }
//     }


// };

struct Distance{
    int feet;
    float inch;

    void info(){
        cout << "Feet => " << feet << " ,Inches => " << inch << endl;
    }
};
Distance add_distance(Distance d1, Distance d2){
    Distance resault;
    resault.feet = d1.feet + d2.feet;
    resault.inch = d1.inch + d2.inch;
    return resault;
}

struct Student
{
    int id;
    string name;
    float gpa;
    float marks[3];

    void info(){
        cout << "Name => " << name << ", GPA => " << gpa << endl;
        cout << "-- Marks --\n";
        for(float m: marks){
            cout << "Mark => " << m << endl;
        }
    }
};

struct NameType{
    string fname;
    string lname;
};

struct AddressType{
    string address1;
    string address2;
    string city;
    string state;
};

struct ContactType{
    string phone;
    string fax;
    string email;
};


struct Employee{
    int empID;
    NameType name;
    AddressType address;
    ContactType contact;
    double salary;
};


int main(){

    // Employee emp1;
    // emp1.emp_no = 1323;
    // emp1.emp_name = "Ali";
    // emp1.emp_salary = 3000;
    // emp1.emp_bonus = 300;
    // emp1.emp_net_salary = emp1.emp_salary + emp1.emp_bonus;

    // emp1.print_info();

    // Employee emp2;
    // emp2 = emp1;
    // emp1.compare(emp2);
// ----------------------------------------------------------------------------------------------
    
    // Distance d1;
    // d1.feet = 3;
    // d1.inch = 6;

    // Distance d2;
    // d2.feet = 6;
    // d2.inch = 4;

    // Distance d3;
    // d3 = add_distance(d1, d2);

    // d3.info();

// ----------------------------------------------------------------------------------------------

    // Student s1;
    // s1.id = 1323;
    // s1.name = "Ali";
    // s1.gpa = 3.56;
    // s1.marks[0] = 78;
    // s1.marks[1] = 80;
    // s1.marks[2] = 87;

    // s1.info();

    // Student arr[3];
    // arr[0].name = "Ahmed";
    // arr[0].id = 1447;
    // arr[0].gpa = 4;
    // arr[0].marks[0] = 95;
    // arr[0].marks[1] = 97;
    // arr[0].marks[2] = 99;

    // arr[0].info();

// ----------------------------------------------------------------------------------------------

    Employee emp1;

    emp1.empID = 1323;
    emp1.name.fname = "Eyad";
    emp1.name.lname = "Elghonemy";
    emp1.address.address1 = "Egypt";
    emp1.address.address2 = "NuN";
    emp1.address.city = "Benha";
    emp1.address.state = "Alqalyubia";
    emp1.contact.email = "eyad0758@gmail.com";
    emp1.contact.fax = "NuN";
    emp1.contact.phone = "+201016432120";
    emp1.salary = 50000;



    return 0;
}