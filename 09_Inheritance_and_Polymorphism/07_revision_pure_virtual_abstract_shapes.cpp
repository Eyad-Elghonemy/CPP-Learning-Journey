# include <iostream>
# include <cmath>
# include <limits>
# include <iomanip>
# include <cstdlib>
# include <ctime>
using namespace std;

class Shape{

    string color;

    public:

        Shape(string c){
            color = c;
        }
        // Pure Virtual Functions

        virtual int area() = 0;

        virtual void draw() = 0;

        virtual void erase() = 0;

        virtual void display() final
        {
            cout << "This Is Shape\n";
        }

};

class Rectangle : public Shape {
    
    int length;
    int width;

    public:
        Rectangle(int l, int w, string c) : Shape(c){
            width = w;
            length = l;
        }

        int area(){
            cout << "Rectangle Class Area : " << (width * length) << endl;
            return (width * length);
        }

        void draw(){
            cout << "Draw Rectangle " << endl;
        }

        void erase(){
            cout << "The Rectangle Erased " << endl;
        }

        // void display(){

        // }

};

class Circle : public Shape { 
    int raduis;

    public : 
        Circle(int r, string c) : Shape(c){
            raduis = r;
        }

        int area(){
            cout << "Circle Area : " << 3.14 * (raduis * raduis) << endl;
            return (3.14 * raduis * raduis);
        }

        void draw(){
            cout << "Draw Circle " << endl;
        }

        void erase(){
            cout << "The Circled Erased\n";
        }
};


int main(){


    Shape * shap_ptr;

    Rectangle rec(10, 7, "Red");
    Circle c(5, "White");

    shap_ptr = & rec;
    shap_ptr->area();
    shap_ptr->draw();
    shap_ptr->erase();


    shap_ptr = & c;
    shap_ptr->area();
    shap_ptr->draw();
    shap_ptr->erase();


    return 0;
}