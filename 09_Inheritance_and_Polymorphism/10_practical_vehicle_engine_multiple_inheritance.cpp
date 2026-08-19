# include <iostream>
using namespace std;

// class BankAccount{
//     protected:
//         string accountholder;
//         double balance;

//     public:
//         BankAccount(): accountholder("Unknown"), balance(0.0) {}
//         BankAccount(string ah, double b): accountholder(ah), balance(b) {}

// };

// class SavingsAccount : public BankAccount{
    
//     protected:
//         double interestrate;

//     public:
//         SavingsAccount(string ah, double b, double ir): BankAccount(ah, b){
//             interestrate = ir;
//         }

//         void applyInterestRate(){
//             cout << "Balance Before Interest Rate: " << balance << " $" << endl;
//             balance +=  balance * (interestrate / 100); 
//             cout << "Balance After Interest Rate: " << balance << " $" << endl;

//         }
        
// };
    //------------------------------------

// class Person{
//     private:
//         string name;
//         string address;
//         int phone;

//     public:
//         Person(string n, string a, int p): name(n), address(a), phone(p) {}

//         void setName(string n) {name = n;}
//         void setAddress(string a) {address = a;}
//         void setPhone(int p) {phone = p;}

//         void display(){
//             cout << "Name: " << name << endl;
//             cout << "Address: " << address << endl;
//             cout << "Phone: " << phone << endl;
//         }
// }; 

// class Employee : public Person {
//     private:
//         int employeeno;

//     public:
//         Employee(string n, string a, int p, int en) : Person(n,a,p){
//             employeeno = en;
//         }

//         void setEmployeeNo(int en) {
//             employeeno = en;
//         }

//         void display(){
//             Person :: display();
//             cout << "Employee Number: " << employeeno << endl;
//         }
// };

// class Manager : public Employee {
//     private:
//         string deptName;
//         double salary;

//     public:

//         Manager(string n, string a, int p, int en, string dn, double s): Employee(n,a,p,en){
//             deptName = dn;
//             salary = s;
//         }

//         void setDeptName(string dn) {deptName = dn;}
//         void setSalary(double s) {salary = s;}
//         double getSalary() {return salary;}

//         void display() {
//             Employee :: display();
//             cout << "Department Name: " << deptName << endl;
//         }

//         bool operator > (Manager other){
//             return this->salary > other.getSalary();
//         }


// };

class Vehicle{
    protected:
        string brand;

    public:
        Vehicle(string b) : brand(b) {}
        void setBrand(string b) {brand = b;}
};

class Engine{
    protected:
        int horsepower;

    public:
        Engine(int hp): horsepower(hp) {}
        void setHorsePower(int hp) {horsepower = hp;}
};

class Car: public Vehicle, public Engine {
    public:
        Car(string b, int hp): Vehicle(b), Engine(hp) {}
        void display(){
            cout << "Car Brand: " << brand << endl;
            cout << "Horse Power: " << horsepower << endl;
        }
};


int main(){

    // SavingsAccount s("Ali", 6000, 5);
    // s.applyInterestRate();
    //------------------------------------
    // Manager m1("ali", "Cairo", 0101647, 101, "HR", 5000);
    // Manager m2("ahmed", "Giza", 0101647, 102, "IT", 7000);

    // (m1 > m2) ? m1.display() : m2.display();

    Car c1("KIA", 6000);
    c1.display();

    return 0;
}