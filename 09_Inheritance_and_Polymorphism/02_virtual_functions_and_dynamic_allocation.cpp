# include <iostream>
using namespace std;


class Shape {
    protected:
        int width, height;

    public:
        Shape(int a, int b){
            width = a;
            height = b;
        }

        virtual int area(){
            cout << "Shape Virtual Function\n";
        }
};

class Rectangle : public Shape {
    private:
        string color;
    
    public:
        Rectangle(string c, int a = 0, int b = 0): Shape(a,b) {color = c;}

        int area(){
            cout << "Rectangle Class Area\n";
            return (width*height);
        }

        friend void display(Rectangle other);
};

void display(Rectangle other){

    cout << "Width : " << other.width << endl;
    cout << "Height : " << other.height << endl;
    cout << "Color : " << other.color << endl;


}

class Triangle : public Shape {
    public:
        Triangle(int a = 0, int b = 0): Shape(a,b) {}

        int area(){
            cout << "Triangle Class Area\n";
            return(0.5 * width * height);
        }
};



int main(){

    // Shape * shap_ptr;

    // Rectangle r("Red", 10, 7);
    // Triangle t(3,8);

    // shap_ptr = &r;
    // shap_ptr->area();

    // display(r);

    // shap_ptr = &t;
    // shap_ptr->area();

    Shape * shape_ptr;
    shape_ptr = new Rectangle("red", 5, 3);
    cout << shape_ptr->area();


    // int x = 10, y = 0 ;

    // try {

    //     if (y==0)
    //         throw "Division By Zero";
        
    //     else
    //         cout << x/y << endl;
    // }

    // catch(const char* msg){
    //     cout << msg << endl;
    //     cout << "Y must be grater than 0\n";
    // }

    // int age = 15;
    // try {
    //     if(age > 18)
    //         cout << "Access Granted - Your Age Enough\n";

    //     else
    //         throw (age);
    // }

    // catch(int n){
    //     cout << "Access Denied - Your Age Must Be At Least 18 Years Old\n";
    //     cout << "Age Is : " << n << endl;
    // }

    // catch(...){
    //     cout << "An Exception Caught\n";
    // }

    // cout << "Program Continued\n";

    

    return 0;
}