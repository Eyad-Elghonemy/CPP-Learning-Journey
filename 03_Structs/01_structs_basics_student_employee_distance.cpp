#include <iostream>
using namespace std;


struct  Student
{
    int student_no;
    string f_name;
    string l_name;
    float total_marks;
    float gpa;

};
 

struct Employee 
{
    int emp_no;
    string f_name;
    string l_name;
    float salary;
    float bonus;
    float net_salary;

};


struct Distance_Type{
    int feet;
    int inches;
};

Distance_Type Add_distance(Distance_Type d1, Distance_Type d2);

struct Student_type{
    int std_no;
    string std_name;
    float gpa;
    float marks[3];

};

int main(){

    Student s1;
    s1.student_no = 132300082;
    s1.f_name = "Eyad";
    s1.l_name = "Elghonemy";
    s1.total_marks = 95;
    s1.gpa = 3.83;

    Employee e1;
    e1.emp_no = 3050322;
    e1.f_name = "Eyad";
    e1.l_name = "Elghonemy";
    e1.salary = 7500;
    e1.bonus = 500;
    e1.net_salary = 8000;

    Employee e2(e1);
    e2 = e1;

    // if(e1.f_name == e2.f_name && 
    //    e1.l_name == e2.l_name){
    //     cout << "Same Employee\n";
    // }

    Distance_Type d1, d2;

    d1.feet = 5;
    d2.feet = 8;

    d1.inches = 6;
    d2.inches = 4;

    Distance_Type result = Add_distance(d1, d2);

    cout << "Resault Feet => " << result.feet << endl;
    cout << "Resault Inches => " << result.inches << endl;

    Student_type std1;
    std1.std_no = 120;
    std1.std_name = "Eyad";
    std1.gpa = 3.83;
    std1.marks[0] = 70;
    std1.marks[1] = 80;
    std1.marks[2] = 90;


    Student_type std2 = {130, "Ali", 3.88, {88, 90, 77}};

    Employee arr[5];
    arr[0].f_name = "Ali";
    arr[0].l_name = "Ahmed";
    arr[0].emp_no = 132;
    arr[0].salary = 3000;
    arr[0].bonus = 500;
    arr[0].net_salary = arr[0].salary + arr[0].bonus;

    Employee * ptr;
    ptr = arr;
    
    

    cout << "Name => " << ptr->f_name << ",Last Name => " << ptr->l_name << " ,Employee Number => " << ptr->emp_no << " ,Salary => " << ptr->salary << " ,Bonus => " << ptr->bonus << " ,Net Salary => " << arr->net_salary << endl;



    return 0;
}


Distance_Type Add_distance(Distance_Type d1, Distance_Type d2){
    
    Distance_Type resault;
    resault.feet = d1.feet + d2.feet;
    resault.inches = d1.inches + d2.inches;
    return resault;

}