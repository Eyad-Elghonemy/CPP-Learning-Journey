# include <iostream>
# include <cmath>
# include <limits>
# include <iomanip>
# include <cstdlib>
# include <ctime>
using namespace std;

class Person{

    private:
        string name;
        string gender;
        float age;

    public:

        Person(): name("Unknown"), gender("Unknown"), age(0){};

        Person(string n, string g, long s, float a)
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
        
};

int main(){

    Student c1;
    c1.display();
    c1.set_name("Mohamed");
    c1.set_gender("Male");
    c1.set_age(20);
    c1.display();

    c1.set_depart("IS");
    c1.set_gpa(3.5);
    c1.set_level(3); 


    return 0;
}