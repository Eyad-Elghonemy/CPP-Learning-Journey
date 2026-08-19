# include <iostream>
# include <cmath>
# include <limits>
# include <iomanip>
# include <cstdlib>
# include <ctime>
using namespace std;

class Rectangle{

    private:
        
        float length;
        float width;

    public:

        void setLength(float l);
        void setWidth(float w);
        float getLength();
        float getWidth();
        Rectangle();
        
        Rectangle(float l, float w);
        Rectangle merge(Rectangle r2){
            Rectangle r3;
            r3.length = length + r2.length;
            r3.width = width + r2.width;
            return r3;
 
        }
        

};

void Rectangle :: setLength(float l){
    length = l;
}

void Rectangle :: setWidth(float w){
    width = w;
}

float Rectangle :: getLength(){
    return length;
}

float Rectangle :: getWidth(){
    return width;
}

Rectangle :: Rectangle():length(0), width(0){};

Rectangle :: Rectangle(float l, float w){
    length = l;
    width = w;
}



int main(){

    Rectangle rec1(5, 3.5);
    Rectangle rec2(3, 4.25);

    Rectangle rec3 = rec1.merge(rec2);

    cout << "Rectangle1 => " << rec1.getLength() << " length, And => " << rec1.getWidth() << " Width" << endl;
    cout << "Rectangle2 => " << rec2.getLength() << " length, And => " << rec2.getWidth() << " Width" << endl;
    cout << "Rectangle3 => " << rec3.getLength() << " length, And => " << rec3.getWidth() << " Width" << endl;



    return 0;
}