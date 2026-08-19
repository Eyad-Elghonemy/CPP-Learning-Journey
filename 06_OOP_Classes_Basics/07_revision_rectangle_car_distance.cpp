# include <iostream>
using namespace std;

class Rectangle{
    private:
        float length;
        float width;

    public:

        Rectangle(): length(0), width(0){};

        Rectangle(float l, float w){
            length = l;
            width = w;
        }

        void setLength(float l){
            if(l>=0)
                length = l;

            else    
                cout << "Error, Enter Positive Value\n";
        }

        void setWidth(float w){
            if(w>=0)
                width = w;

            else    
                cout << "Error, Enter Positive Value\n";
        }

        float getLength(){
            return length;
        }

        float getWidth(){
            return width;
        }

        float getArea(){
            return (length*width);
        }
};

class Car{
    private:

        string make;
        int yearmodel;
        unsigned static int count;

    public:

        Car();
        Car(string m, int ym);

        void setMake(string m){
            make = m;
        }

        void setYearModel(int ym){
            yearmodel = ym;
        }

        string getMake(){
            return make;
        }
        int getYearModel(){
            return yearmodel;
        }

        static int getcount(){
            return count;
        }

        ~Car(){}        
};

class Distance{
    private:
        int feet;
        float inch;

    public:
        Distance():feet(0), inch(0){}
        
        Distance(int f , float i): feet(f), inch(i){}
        
        ~Distance(){
            cout << "Object Life Time Ended\n";
        }
};

Rectangle merge(Rectangle r1, Rectangle r2){
    Rectangle res;
    res.setLength(r1.getLength() + r2.getLength());
    res.setWidth(r1.getWidth() + r2.getWidth());
    return res;
}


Car :: Car(): make("Unknown"), yearmodel(0) {count ++;}
Car :: Car(string m, int ym): make(m), yearmodel(ym) {count ++;}
unsigned int Car :: count = 0;


int main(){

    // Rectangle r1;
    // r1.setLength(5);
    // r1.setWidth(10);

    // Rectangle r2(4.5, 15);

    // Rectangle r3 = merge(r1, r2);
    // cout << "Area => " << r3.getArea() << endl;

    Car c1;
    c1.setMake("KIA");
    c1.setYearModel(2011);
    Car c2;
    cout << "You Have " << Car :: getcount() << " Cars\n" << endl;
 

    // cout << "Make => " << c1.getMake() << endl;
    // cout << "Year Model => " << c1.getYearModel() << endl;

    // // Distance d1(5, 4.5);
    // // Distance d2(d1);
    // // Distance d3;
    // // Distance d4 = d3;

    


    return 0;
}