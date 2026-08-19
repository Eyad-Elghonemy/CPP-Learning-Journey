# include <iostream>
using namespace std;



// class Person{
    
//     protected:
        
//         string lastName;
//         string firstName;
//         string address;
//         int homePhone;

//     public:

//         Person(){
//             firstName = "Unknown";
//             lastName = "Unknown";
//             address = "Unknown";
//             homePhone = 0;
//         }

//         Person(string fn, string ln, string a, int hp){
//             firstName = fn;
//             lastName = ln;
//             address = a;
//             homePhone = hp;
//         }

//         void update_address(string new_add) {
//             address = new_add;
//         }
    
// };

// class Employee : public Person {
//     private:
        
//         string hireDate;
//         int payGrade;

//     public:

//         Employee(){
//             hireDate = "Unknown";
//             payGrade = 0;
//         }
//         Employee(string fn, string ln, string a, int hp, string hd, int pg) : Person(fn, ln, a, hp) ,hireDate(hd) ,payGrade(pg) {}

//         void update_paygrade(int new_pg) {
//             payGrade = new_pg;
//         }


// };

// class Customer : public Person {
//     private:
        
//         string lastContactDate;

//     public:

//         Customer(){
//             lastContactDate = "Unknown";
//         }
//         Customer(string fn, string ln, string a, int hp, string lcd) : Person(fn, ln, a, hp) ,lastContactDate(lcd) {}

//         void update_last_contact_date(int new_lcd) {
//             lastContactDate = new_lcd;
//         }

// };


// class Counter {

//     private:
//         unsigned int count;
//         static unsigned int ct;
//         void eyad();

//     public:
//         Counter() : count(0) {ct++;}
//         Counter(int c) : count(c) {ct++;}
//         unsigned int get_counter() {return count;}
//         Counter operator ++ () {
//             // return Counter(++count);
//             ++count;
//             return *this;
//         }
//         Counter operator ++ (int) {
//             // Counter temp;
//             // temp.count = count;
//             // count ++;
//             // return temp;

//             Counter temp = *this;
//             this->count++;
//             return temp;

//         }

//         static int get_count(){
//             return ct;
//         }

// };

// void Counter :: eyad(){
//     cout << "eyad";
// }

// unsigned int Counter :: ct = 0;

class Animal {
    public:
    virtual void speak() {cout << "Some Sound\n";}

};

class Dog : public Animal {
    public:
        void speak() {cout << "Woof\n";}
};

class Cat : public Animal {
    public:
        void speak() {cout << "Meow\n";}
};


void swap(int &n1, int &n2);
int sum(int n1, int n2, float &c);

int main(){

    // Counter c1, c2, c3;
    // ++c1;
    // cout << c1.get_counter() << endl;
    // cout << Counter :: get_count();



    // int n1 = 6;
    // int n2 = 3;

    // cout << "n1 : " << n1 << endl;
    // cout << "n2 : " << n2 << endl;
    // swap(n1, n2);
    // cout << "n1 : " << n1 << endl;
    // cout << "n2 : " << n2 << endl;

    // float c = 0;
    // int s = sum(n1, n2, c);
    // cout << s / c << endl;

    // Animal *ptr = new Cat();
    Animal *ptr = new Dog();

    ptr->speak();

}


void swap(int &n1, int &n2){
    int temp = n1;
    n1 = n2;
    n2 = temp;
}

int sum(int n1, int n2, float &c){
    int s = 0;
    if (n2<n1){
        int temp = n1;
        n1 = n2;
        n2 = temp;
    }
    for(int i = n1; i<=n2; i++){
        s += i;
        c++;
    }
    return s;
}