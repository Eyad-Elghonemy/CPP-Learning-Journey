# include <iostream>
# include <cmath>
# include <limits>
# include <iomanip>
# include <cstdlib>
# include <ctime>
using namespace std;

class Calculator{

    private:

        float n1;
        float n2;

    public: 

        Calculator(): n1(0), n2(0){};

        Calculator(float num1, float num2){
            n1 = num1;
            n2 = num2;
        }

        ~Calculator(){
            cout << "Your Numbers Deleted\n";
        }

        float add(){
            return (n1 + n2);
        }

        /* ---> Overload , Methods With Same Name ,But Different Signture (No.of Args, Type Of Args, Order Of Args)*/ 
        double add(double n1, double n2){
            return(n1 + n2);
        }

        /*--> Polymorphism , Methods With Same Name ,But Different Behavior*/
        void add(double n1, double n2, double n3){
            cout << n1 << " + " << n2 << " + " << n3 << " = " << n1+n2+n3;
        }


        float sub(){
            return (n1 - n2);
        }

        float mul(){
            return (n1 * n2);
        }

        float div(){

            if(n2==0)
                cout << "Error, Can't Divide By 0\n";

            else
                return (n1 / n2);
        }

};


int main(){

    int user_op = -1;

    while(user_op != 2 && user_op != 4){

        cout << "1.Open Calculator\n2.Close Calculator\n";
        cin >> user_op;

        float n1, n2;
        char op;

        cout << "Enter First Number : " << endl;
        cin >> n1;

        cout << "Enter Second Number : " << endl;
        cin >> n2;

        Calculator c1(n1, n2);

        cout << "Enter Your Choice : \n1.Add\n2.Subtraction\n3.Multiplication\n4.End\n";

        cout << "Enter Operation : " << endl;
        cin >> op;

        switch (op)
        {

        case '+' : cout << n1 << " + " << n2 << " = " << c1.add() << endl;
        break;
        
        case '-' : cout << n1 << " - " << n2 << " = " << c1.sub() << endl;
        break;

        case '*' : cout << n1 << " * " << n2 << " = " << c1.mul() << endl;
        break;

        case '/' : cout << n1 << " + " << n2 << " = " << c1.div() << endl;
        break;

        default:
                cout << "Invalid Operation, Try Again\n";
        }


    }


    return 0;
}