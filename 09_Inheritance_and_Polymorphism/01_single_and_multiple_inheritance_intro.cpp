# include <iostream>
using namespace std;


class Counter{
    protected:
        unsigned int count;

    public:
        Counter(): count(0) {}
        Counter(int c): count(c) {}
        int get_count(){return count;}
        Counter operator ++(){
            ++count;
            Counter temp;
            temp.count = count;
            return temp;
        }
};

class CountDn : public Counter{

    public:
        Counter operator --(){
            --count;
            return Counter(count);
        }
};

class Person{
    protected:
        string name;
        string gender;
        float age;

    public:
        Person(): name("Unknown"), gender("Unknown"), age(0) {}
        Person(string n, string g, float a): name(n), gender(g), age(a) {}
        void set_age(float a) {age = a;}
        float get_age() {return age;}
        void set_name(string n){name = n;}
        string get_name() {return name;}
        void set_gender(string g){gender = g;}
        string get_gender() {return gender;}
         void display(){cout << "Name => " << name << ", Gender => " << gender << ",And Age => " << age << endl;}

};

class Student : public Person {

    protected:
        int level;
        float gpa;
        string depart;

    public:

        Student():  level(0), gpa(0), depart("Unknown") {}
        Student(string n, string g, float a, int l, float gp, string d): Person(n, g, a)
        {
            level = l;
            gpa = gp;
            depart = d;
        }
        void display(){
            Person :: display();
            cout << "Level => " << level << ", GPA => " << gpa << ",And Department => " << depart << endl;
        }

};

class A {
    public:
        int a = 5;
        A(){cout << "Constractor For Class A\n";}
};

class B {
    public:
        int b = 10;
        B(){cout << "Constractor For Class B\n";}
};


class C : public A, public B{
    public:
        int c = 20;
        C(){cout << "Constractor For Class C\n";}
    
};


int main(){

    A a1;
    B b1;
    C c1;


    // CountDn c1;
    // ++c1;
    // ++c1;
    // cout << c1.get_count() << endl;
    // --c1;
    // cout << c1.get_count() << endl;

    // ----------------------------------

    // Student s1;
    // Student s2("Ahmed", "Male", 21, 4, 3.55, "ECE");
    // Person p1;
    // Person p2("Ali", "Male", 23);
    // cout << "-----------------------------------------------\n";
    // s1.display();
    // cout << "-----------------------------------------------\n";
    // s2.display();
    // cout << "-----------------------------------------------\n";
    // p1.display();
    // cout << "-----------------------------------------------\n";
    // p2.display();
    // cout << "-----------------------------------------------\n";
    // Person* p1 = new Person("Ali", "Male", 23);
    // Person* p2 = new Student("Ahmed", "Male", 21, 4, 3.55, "ECE");

    // Student* s1 = new Person("Ali", "Male", 23);
    // Student* s2 = new Student("Ahmed", "Male", 21, 4, 3.55, "ECE");

    // s1->display();
    // cout << "-----------------------------------------------\n";
    // s2->display();





    return 0;
}