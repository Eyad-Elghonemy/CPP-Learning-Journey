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
        int model;
        string color;
        static int count;

    public:

        void set_maker(string mk);
        string get_maker();
        void set_model(int md);
        int get_model();
        int getCarsCount();
        

        Car(string mk, int md, string cr){
            maker = mk;
            model = md;
            color = cr;
            count++;
        }

        Car(){
            maker = "Unknown\n";
            model = 0;
            color = "Unknown\n";
            count++;
        }

        // Car() : maker("Unknown\n") {};

        ~Car(){
            count--;
        }

};

int Car :: count = 0;

void Car :: set_maker(string mk){
    maker = mk;
}

string Car :: get_maker(){
    return maker;
}

void Car :: set_model(int md){
    model = md;
}

int Car :: get_model(){
    return model;
}

int Car ::  getCarsCount() {
    return count;
}


class Rectangle{

    private :

        float l1;
        float l2;
        static int count;

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
            count ++;
        }

        Rectangle(float len1, float len2, float len3){
            l1 = len1;
            l2 = len2;
            l3 = len3;
            count ++;
        }

        static float add_lengths(float l1, float l2){
            return (l1 + l2);
        }

        static Rectangle merge(Rectangle r1, Rectangle r2){
            Rectangle r3(Rectangle :: add_lengths(r1.l1, r2.l1), Rectangle :: add_lengths(r1.l2, r2.l2), 0);
            return r3;
        }

        static int getCount(){
            return (count);
        }

        ~Rectangle(){
            count--;
        }

};


float Rectangle :: get_len2(){
    return l2;
}

int Rectangle :: count = 0;



int main(){

    // Rectangle r1(30, 60, 0);
    // Rectangle r2;

    // Car c1;
    // Car c3 (c1);
    // Car c2("Haunda");

    // c1.set_maker("KIA");

    // cout << "Maker Of Car => " << c1.get_maker() << endl;

    // cout << c1.get_maker() << endl;
    // // cout << c2.get_maker() << endl;
    // cout << c3.get_maker() << endl;

    Rectangle r1(1, 4, 5);
    Rectangle r2(4, 1, 0);

    Rectangle r3 =  Rectangle :: merge(r1, r2);

    Rectangle r4(Rectangle::add_lengths(1, 4), Rectangle :: add_lengths(4, 1), 0);

    cout << r3.get_len1() << endl << r3.get_len2() << endl << endl;
    cout << r4.get_len1() << endl << r4.get_len2() << endl;

    cout << "We Have => " << Rectangle :: getCount() << " Rectangles\n";
 


    // Car k1;
    // cout << "Counter Reached : " << k1.getCarsCount() << endl;


    // Car k2;
    // cout << "Counter Reached : " << k2.getCarsCount() << endl;

    // Car k3;
    // cout << "Counter Reached : " << k3.getCarsCount() << endl;


    // r1.l3 = 50.3;
    // r2.set_len(30.2, 60.5);


    // cout << r1.l3 << endl;
    // cout << r1.get_len1() << endl;
    // cout << r1.get_len2() << endl;

    // cout << r2.get_len1() << endl;
    // cout << r2.get_len2() << endl;



    return 0;
}