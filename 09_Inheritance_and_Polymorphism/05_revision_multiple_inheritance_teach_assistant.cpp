# include <iostream>
# include <cmath>
# include <limits>
# include <iomanip>
# include <cstdlib>
# include <ctime>
using namespace std;

class Employee{
    private:
        string name;
        string jop;
        float salary;

    public:

        Employee(string n, string j, float s){
            name = n;
            jop = j;
            salary = s;
        }
        
        void set_salary(float s){
            salary = s;
        }

        void set_jop(string j){
            jop = j;
        }

        void set_name(string n){
            name = n;
        }

        float get_salary(){
            return salary;
        }

        string get_name(){
            return name;
        }

        string get_jop(){
            return jop;
        }

        void display(){
            cout << "name => " << name << " ,Jop => " << jop << " ,Salary => " << salary << endl;
        }


};
class Student{
    private:
        string depart;
        string name;
        string research_interst;

    public:

        Student(string d, string ra){
            depart = d;
            research_interst = ra;
        } 
        
        void set_depart(string d){
            depart = d;
        }
        void set_research_interest(string ra){
            research_interst = ra;
        }

        string get_depart(){
            return depart;
        }
        string get_research_interest(){
            return research_interst;
        }

        void set_name(string n){
            name = n;
        }

        void display(){
            cout << "Department => " << depart << " ,Research Interest => " << research_interst << endl;
        }


};

class TeachAssistant : public Student , public Employee {
    public : 
        TeachAssistant(string n, string j, float s, string d, string ra) : Employee(n, j, s), Student(d, ra){
        }

        void display(){
            Employee :: display();
            Student :: display();
        }

    
};

int main(){

    TeachAssistant t1("Ahmed", "TA", 5000, "IS", "DataBases");
    t1.set_salary(7000);
    t1.set_research_interest("Data Science");
    t1.Employee :: set_name("Mohamed");
    t1.Student :: set_name("Ali");

    t1.display();


    return 0;
}