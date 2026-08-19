# include <iostream>
using namespace std;


/*
class Employee{
    private:
        int employeeID;
        string firstname, lastname;
        double salary, bonus;

    public:
        Employee(): employeeID(0), firstname("Unknown"), lastname("Unknown"), salary(0.0), bonus(0.0) {}
        Employee(int ei, string fn, string ln, double s, double b): employeeID(ei), firstname(fn), lastname(ln), salary(s), bonus(b) {}
        
        void setEmpID(int ei) {employeeID = ei;}
        int  getEmpID() {return employeeID;}
        void setFirstName(string fn){firstname = fn;}
        string getFirstName() {return firstname;}
        void setLastName(string ln){lastname = ln;}
        string getLastName() {return lastname;}
        void setSalary(double s) {salary = s;}
        double getSalary() {return salary;}
        void setBonus(double b) {bonus = b;}
        double getBonus() {return bonus;}
        
        double calcNetSalary() {return salary + bonus;}
        void printInfo(){
            cout << "ID: " << employeeID << endl;
            cout << "Name: " << firstname << " " << lastname << endl;
            cout << "Net Salary:" << salary + bonus << endl;
        }

        void setSalary(double s, double b) {
            salary = s;
            bonus = b;
        }

        double operator + (Employee other) {
            return salary + other.salary;
        }

        
        double operator - (Employee other) {
            return salary - other.salary;
        }

        bool operator == (Employee other){
            return employeeID == other.salary;
        }

        bool operator != (Employee other) const {
            return employeeID != other.employeeID;
        }

        void operator ++ (){
            salary += 100;
        } 

        void operator ++ (int){
            salary += 100;
        } 

        bool operator > (Employee other){
            return salary > other.salary;
        }
        

        ~Employee(){
            cout << "Employee object destroyed" << endl;
        }
};

class Student{
    private:
        int studentID;
        string name;
        float gpa;
        int level;

    public:
        Student(): studentID(0), name("Unknown"), gpa(0.0), level(0) {}
        Student(int id, string n, float g, int l): studentID(id), name(n), gpa(g), level(l) {}

        void setStudentID(int id) {studentID = id;}
        int  getStudentID() {return studentID;}
        void setName(string n){name = n;}
        string getName() {return name;}
        void setGpa(float g){gpa = g;}
        float getGpa() {return gpa;}
        void setLevel(int l) {level = l;}
        int getLevel() {return level;}
        
        string checkGpa() {
            if (gpa >= 2.0)
                return "Passed";
            else
                return "Failed";
        }

        void setGpa(float g, int l){
            gpa = g;
            level = l;
        }

        bool operator == (Student other) const{
            return studentID == other.studentID;
        }

        bool operator > (Student other) const{
            return gpa > other.gpa;
        }

        bool operator < (Student other) const{
            return gpa < other.gpa;
        }

        float operator + (Student other) const {
            return gpa + other.gpa;
        }

        float operator - (Student other) const {
            return gpa - other.gpa;
        }

        
        float operator * (Student other) const {
            return gpa * other.gpa;
        }

        float operator / (Student other) const {
            
            if (other.gpa == 0){
                cout << "Error, Can't Divide\n";
                return 0;}
            else    
                return gpa / other.gpa;
        }

        Student operator ++ (){
            ++gpa;
            return *this;
        }

        Student operator ++ (int) {
            Student other = *this;
            gpa++;
            return other;
        }

        Student operator -- (){
            --gpa;
            return *this;
        }

        Student operator -- (int) {
            Student other = *this;
            gpa--;
            return other;
        }

        void printInfo(){
            cout << "Student ID: " << studentID << endl;
            cout << "Name: " << name << endl;
            cout << "GPA: " << gpa << endl;
            cout << "Level: " << level << endl;
        }

        ~Student(){
            cout << "Student Object Removed";
        }


};

*/


class Person {
    private:
        string name;
        string city;
        int age;

    public:
        Person() : name("Unknown"), city("Unknown"), age(0) {}
        Person(string n, string c, int a) : name(n), city(c), age(a) {}
        
        string getName() const {return name;}
        string getCity() const {return city;}
        int getAge() const {return age;}

        void printInfo(){
            cout << "Name: " << name << endl;
            cout << "City: " << city << endl;
            cout << "Age: " << age << endl;
        }
};


class Employee : public Person {
    private:
        int id;
        double salary;  
        string jopTitle;

    public:
        Employee(): id(0), salary(0), jopTitle("Unknown") {}
        Employee(string n, string c, int a, int i, double s, string jt): Person(n,c,a) {
            id = i;
            salary = s;
            jopTitle = jt;
        }

        int getID() {return id;}
        double getSalary() {return salary;}
        string GetJopTitle() {return jopTitle;}

        void printInfo(){
            Person :: printInfo();
            cout << "ID: " << id << endl;
            cout << "Salary: " << salary << endl;
            cout << "Jop Title: " << jopTitle << endl;
        }
};



class Programmer : public Employee {
    private:
        string programminlangiages;
        string frameworks;

        public:

            Programmer(): programminlangiages(""), frameworks("") {}
            Programmer(string n, string c, int a, int i, double s, string jt, string pl, string fw):Employee(n,c, a, i, s, jt){
                programminlangiages = pl;
                frameworks = fw;
            }

            void printInfo(){
                Employee :: printInfo();
                cout << "Programming Languages : " << programminlangiages << endl;
                cout << "Frame Works : " << frameworks << endl;
            }



};

class Player{
    private:
        string sport;
        int goalscored;

    public:
        Player(){
            sport = "";
            goalscored = 0;
        }
        Player(string s, int gs){
            sport = s;
            goalscored = gs;
        }

        void printInfo() {
            cout << "Sport: " << sport << endl;
            cout << "Goals Scored: " << goalscored << endl;
        }
};


class PlayerPerson : public Person, public Player {
    public:
        PlayerPerson(string n, string c, int a, string s, int gs) : Person(n,c,a), Player(s, gs) {}

        void printInfo() {
            Person :: printInfo();
            Player :: printInfo();
        }
};



int main(){

    //------------------------------------------
    // Employee e1;
    // Employee e2(1, "Ali", "Ahmed", 5000, 100);

    // e1.setEmpID(2);
    // e1.setFirstName("Sara");
    // e1.setLastName("Mohamed");
    // e1.setSalary(3000, 600);
    
    // e1.printInfo();
    // e2.printInfo();

    // cout << e1 + e2 << endl;
    // cout << (e1==e2) << endl;
    // cout << (e2>e1) << endl;
    // ------------------------------------------

    // Student s1;
    // Student s2(101, "Mona", 3.5, 3);

    // s1.setStudentID(100);
    // s1.setName("Ali");
    // s1.setGpa(2.68, 2);

    // s1.printInfo();
    // s2.printInfo();

    // cout << (s1 == s2) << endl;
    // cout << (s1 > s2) << endl;
    // cout << (s1 < s2) << endl;

    // cout << (s1 + s2) << endl;
    // cout << (s1 - s2) << endl;
    // cout << (s1 * s2) << endl;
    // cout << (s1 / s2) << endl;

    // s2.setGpa(0);
    // cout << (s1 / s2) << endl;


    // s1++;
    // cout << s1.getGpa() << endl;
    // ++s1;
    // cout << s1.getGpa() << endl;
    // s1--;
    // cout << s1.getGpa() << endl;
    // --s1;
    // cout << s1.getGpa() << endl;

    // Programmer p("Ahmed","Cairo",28,1,8000,"Dev","C++","Qt");
    // p.printInfo();

    // PlayerPerson p1("Ali", "Benha", 25, "Football", 35);
    // p1.printInfo();





    return 0;
}