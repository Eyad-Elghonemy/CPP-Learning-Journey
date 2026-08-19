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

        }

        friend void print(Person p);
        friend class PrintClass;
};

class PrintClass{
    public:
        void print(Person p){   
                cout <<"Basic Data Of Person : \n";
                cout << "Name " << p.name << ", Gender " << p.gender  << " ,Age " << p.age << endl;
        }
};


void print(Person p){
    cout <<"Basic Data Of Person : \n";
    cout << "Name " << p.name << ", Gender " << p.gender  << " ,Age " << p.age << endl;
}

int main(){

    Person x("Ahmed", "Male", 20);
    // print(x);
    PrintClass pc;
    pc.print(x);


    return 0;
}