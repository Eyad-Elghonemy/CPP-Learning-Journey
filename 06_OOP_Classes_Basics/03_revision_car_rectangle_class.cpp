# include <iostream>
# include <cmath>
# include <limits>
# include <iomanip>
# include <cstdlib>
# include <ctime>
using namespace std;


class Car{

    private : 

        string maker;

    public:

        void set_maker(string mk);
        string get_maker();

        Car(string mk){
            maker = mk;
        }

        Car() : maker("Unknown\n") {};

};

void Car :: set_maker(string mk){
    maker = mk;
}

string Car :: get_maker(){
    return maker;
}




class Rectangle{

    private :

        float l1;
        float l2;

    public : 

        float l3;

        void set_len(float r1, float r2){
            l1 = r1;
            l2 = r2;
        }

        float get_len1(){
            return l1; 
        }

        float get_len2();

        Rectangle(){
            l1 = l2 = l3 = 0;
        }

        Rectangle(float len1, float len2, float len3){
            l1 = len1;
            l2 = len2;
            l3 = len3;
        }

};


float Rectangle :: get_len2(){
    return l2;
}


int main(){

    Rectangle r1(30, 60, 0);
    Rectangle r2;

    Car c1;
    Car c3 (c1);
    Car c2("Haunda");

    c1.set_maker("KIA");

    cout << "Maker Of Car => " << c1.get_maker() << endl;

    r1.l3 = 50.3;
    r2.set_len(30.2, 60.5);


    cout << r1.l3 << endl;
    cout << r1.get_len1() << endl;
    cout << r1.get_len2() << endl;

    cout << r2.get_len1() << endl;
    cout << r2.get_len2() << endl;


    cout << c1.get_maker() << endl;
    cout << c2.get_maker() << endl;
    cout << c3.get_maker() << endl;


    return 0;
}