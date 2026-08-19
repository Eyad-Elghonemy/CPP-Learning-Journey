# include <iostream>
# include <cmath>
# include <limits>
# include <iomanip>
# include <cstdlib>
# include <ctime>
using namespace std;

class Base{

    private:
        int x;

    public:
        Base(){
            x = 0;
            cout << "Base Dafault Constractor\n";
        }
};

class Derived : public Base{

    int y;

    public:
        Derived(){
            y=0;
            cout<<"Derived Class Default Constractor\n";
        }

        Derived(int i){
            y=i;
            cout<<"Derived Class Parameterized Constractor\n";
        }
};

class Person{

    private:
        string name;
        string gender;
        float age;

    public:

        Person(): name("Unknown"), gender("Unknown"), age(0){};

        Person(string n, string g, float a)
        {
            name = n;
            gender = g;
            age = a;
        }

        void set_age(float a)
        {
            age = a;
        }

        float get_age(){
            return age;
        }

        void set_name(string n){
            name = n;
        }

        string get_name(){
            return name;
        }

        void set_gender(string g){
            gender = g;
        }

        string get_gender(){
            return gender;
        }

        void display(){

            cout << "The Person Basic Data Is : \n";
            cout << name << " " << gender << " " << age << " " << endl;

        };
};

class Student : public Person {
    
    private:
        int level;
        float gpa;
        string depart;

    public:

    Student(string n, string g, float a, int l, float gp, string d) : Person(n,g,a)
    
    {
        level = l;
        gpa = gp;
        depart = d;

    }
        void set_level(int l){
            level = l;
        }
        void set_gpa(float g){
            gpa = g;
        }
        void set_depart(string d){
            depart = d;
        }


        int get_level(){
            return level;
        }
        
        float get_gpa(){
            return gpa;
        }

        string set_depart(){
            return  depart;
        }
        
        void display(){
            Person :: display();
            cout << "Depart => " << depart << " ,Level =>  " << level << " ,GPA => " << gpa << endl;
        }
        
};

class PostGraduateStudent : public Student { 
    
    private : 
        string research_interest;

    public : 

        PostGraduateStudent(string n, string g, float a, int l, float gp, string d, string ra) : Student(n,g,a,l,gp,d){
            research_interest = ra;
        }

        void set_research_interest(string r){
            research_interest = r;
        }

        string get_research_interest(){
            return research_interest;
        }

        void display(){
            Student :: display();
            cout << "Research Interest => " << research_interest << endl;
        }

};


int main(){

    // Base b;

    // Derived d1;
    // Derived d2(10);

    Student s1("Ahmed", "Male", 15, 5, 3.5, "IS");
    s1.display();

    PostGraduateStudent p1("Ahmed", "Male", 15, 5, 3.5, "IS", "AI");
    p1.display();


    return 0;
}