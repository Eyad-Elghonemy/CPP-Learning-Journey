#include <iostream>
#include <string>
using namespace std;


class Calculator{

    private : 

        static int counter;

    public: 
        static int add(int num1, int num2){
        return num1 + num2;
    };
        static int multiply(int num1, int num2){
            return num1 * num2;
        };

        static int subtract(int num1, int num2){
            return num1 - num2;
        };

        Calculator();
        ~Calculator();

};

int Calculator :: counter = 0;

int main(){

    cout << Calculator :: add(3, 5) << endl;

    cout << Calculator :: subtract(6, 9);

    return 0;
}