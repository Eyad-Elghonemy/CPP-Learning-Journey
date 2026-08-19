# include <iostream>
using namespace std;

class Student{
    private:
        string name;
        int id;
        float gpa;
        unsigned static int count;

    public:
        Student(string n, int i, float g): name(n), id(i), gpa(g) {count++;}
        ~Student() {count--;
        cout << "Object removed\n";}
        static int getCount() {return count;}
};


unsigned int Student :: count = 0;

int main() {

    Student s1("Ali",1, 2.3);
    Student s2("Ali",1, 2.3);
    Student s3("Ali",1, 2.3);
    Student s4("Ali",1, 2.3);

    cout << Student :: getCount() << endl;

    

    return 0;
}