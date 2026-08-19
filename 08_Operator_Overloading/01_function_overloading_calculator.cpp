/*OVERLOADING*/
 
#include <iostream>
#include <string>
using namespace std;

class Calculator{

    private:
        float num1;
        float num2;

    public:

        Calculator();
        Calculator(float n1, float n2);
        ~Calculator();
        int add(int n1, int n2);
        int add(int n1, int n2, int n3);
        double add(double n1, double n2);
        string add(string a, string b);


};

Calculator :: Calculator(): num1(0), num2(0)
{
}

Calculator :: Calculator(float n1, float n2): num1(n1), num2(n2)
{
}

int Calculator :: add(int n1, int n2){
    return n1 + n2;
}

int Calculator :: add(int n1, int n2, int n3){
    return n1 + n2 + n3;
}

double Calculator :: add(double n1, double n2){
    return n1 + n2;
}

string Calculator :: add(string n1, string n2){
    return n1 + " " + n2;
}



int main(){

    Calculator c1;
    Calculator c2(5, 6);
    
    cout << "This Is Version 1 :  " << c1.add(2, 3) << endl;
    cout << "This Is Version 2 :  " << c1.add(2, 3, 10) << endl;
    cout << "This Is Version 3 :  " << c1.add(5.3, 9.8) << endl;
    cout << "This Is Version 4 :  " << c1.add("Hello", "World") << endl;


    return 0;
}