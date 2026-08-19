#include <iostream>
#include <cmath>
#include <climits>
#include <cstdlib>
#include <ctime>
#include <iomanip>

// #include <bits/stdc++.h>

using namespace std;

class Rectangle{
    
    private:

        float length;
        float width;
        
    public:

    
    void setLength(float l){
        if(l >= 0)
            length = l;
        else
            cout << "Error, Can't Be Negative Value\n";
    }

    void setWidth(float w){
        if(w >= 0)
            width = w;
        else
            cout << "Error, Can't Be Negative Value\n";
    }

    float getLength(){

        return length ;
    }

    float getWidth(){

        return width ;
    }

    float getArea(){
        return (length * width);
    }

    Rectangle(): length(0), width(0){
        cout << "Reactangle Is Created\n";
    }

    Rectangle merge(Rectangle r2) { 
        Rectangle result;
        result.length = length + r2.length;
        result.width = width + r2.width;

        return result;
    }

    ~Rectangle(){
        cout << "Rectangle Destroyed\n";
    }


};

int main(){
    

    Rectangle box;
    box.setLength(40.5);
    box.setWidth(30.6);
    float a = box.getArea();

    cout << "Recatngle Area : " << a << endl;

    box.merge(box);
    
    return 0;
}