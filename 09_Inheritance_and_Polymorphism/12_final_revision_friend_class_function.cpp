# include <iostream>
using namespace std;

class Person{
    private:
        string name;
        int age;

    public:
        Person(string n, int a) : name(n), age(a) {}

        friend class PrintClass;
        friend void print(Person P);
};

class PrintClass{
    public:
        void print(Person p){
            cout << "Name : " << p.name << ", Age: " << p.age << endl;
        }
};

void print(Person P){
    cout << "Name : " << P.name << ", Age: " << P.age << endl;
}

// void division(int n1, int n2) throw (exception){
//     if(n2==0)
//         throw exception();
//     else    
//         cout << n1/n2;
// }

int main(){

    // Person p("Ali", 25);
    // PrintClass p2;
    // p2.print(p);
    // cout << "**********************************************\n";
    // print(p);

    // int n1, n2;
    // cin >> n1 >> n2;
    // try{
    //     division(n1, n2);
    // }
    // catch (exception &e1){
    //     cout << e1.what() << endl;
    // }


    // int n1, n2;
    // cin >> n1 >> n2;
    // int age = 20;
    // try {
    //     if (n2==0)
    //         // throw std::logic_error("zero");
    //         throw "division by zero";
    //     else
    //         cout << n1/n2 << endl;

    //     if (age>18)
    //         cout << "Successful Access\n";
    //     else 
    //         throw (age);

    // }

    // catch (const char* msg){
    //     cout << msg << endl;
    //     cout << "Y cannot be 0\n";
    // }

    // catch(int num){
    //     cout << "Not Enough Age\n";
    //     cout << "Age : " << num << endl;
    // }
    
    // catch(...){
    //     cout << "An Exception Caught\n";
    // }

    // cout << "Program Continued\n";


    return 0; 
}