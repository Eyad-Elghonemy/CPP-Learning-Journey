# include <iostream>
# include <cmath>
# include <limits>
# include <iomanip>
# include <cstdlib>
# include <ctime>
using namespace std;

class Employee{
    protected:
        string name;
        int emp_id;
        float salary;

    public:
        Employee(): name("Unknown"), emp_id(0), salary(0){};
        Employee(string n, int id, float s): name(n), emp_id(id), salary(s){};
    
        virtual float get_total_salary() = 0;

        virtual void print(){
            cout << "Name => " << name << " ,Employee ID => " << emp_id << endl; 
        }

};

class Sales : public Employee {
    private : 
        float gross_sales;
        float commission_rate;

    public:

        Sales(string n, int id, float s, float gs, float cr) : Employee(n,id,s){
            gross_sales = gs;
            commission_rate = cr;
        }

        void set_gross_sales(float gs){
            gross_sales = gs;
        }

        void set_commission_rate(float cr){
            commission_rate = cr;
        }

        float get_total_salary(){
            return (salary + (gross_sales * commission_rate));
        }

        void print(){
            Employee :: print();
            cout << "Gross Sales => " << gross_sales << " ,Commission Rate => " << commission_rate << endl; 
        } 

};

class Engineer : public Employee { 
    private : 
        string speciality;
        int experience;
        int overtime_hours;
        float overtime_hour_rate;


    public:
        Engineer(string n, int id, float s, string sp, int exp, int ovh, float ovhr): Employee(n,id,s){
            speciality = sp;
            experience = exp;
            overtime_hours = ovh;
            overtime_hour_rate = ovhr;
        }

        void set_overtime_hours(float ovh){
            overtime_hours = ovh;
        }

        void set_overtime_hours_rate(float ovhr){
            overtime_hour_rate = ovhr;
        }

        float get_total_salary(){
            return (salary + (overtime_hours * overtime_hour_rate));
        }

        void print(){
            Employee :: print();
            cout <<"Speciality => " << speciality << " ,Experience => " << experience << " ,Overtime Hours => " << overtime_hours << " ,Overtime Hours Rate => " << overtime_hour_rate << endl;
        }      

};

int main(){

    Employee * emp_ptr;

    Sales s("Ali", 13566, 5000, 50000, .10);
    Engineer e("Ahmed", 56987, 7000, "SW Engineer", 5, 10, 50);

    emp_ptr = & s;

    emp_ptr ->print();
    cout << "Salary => "<<emp_ptr->get_total_salary() << endl;

    emp_ptr = & e;

    emp_ptr->print();
    cout << "Salary => "<<emp_ptr->get_total_salary() << endl;

    return 0;
}