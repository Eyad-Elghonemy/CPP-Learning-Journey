# include <iostream>
# include <cmath>
# include <limits>
# include <iomanip>
# include <cstdlib>
# include <ctime>
using namespace std;


class Square{

    private: 
        float length;

    public:

        Square();

        Square(float l){
            length = l;
        }

        float area(){
            return (length*length);
        }

        float perimeter(){
            return (length*4);
        }

        ~Square(){
            cout << "Your Square Died\n";
        }

};

Square :: Square(){
    length = 0;
}  

class Rectangle{

    private:

        float length;
        float width;

    public:

        Rectangle();

        Rectangle(float l, float w){
            length = l;
            width = w;
        }

        float area(){
            return (length * width);
        }

        float perimeter(){
            return((length+width)*2);
        }

        ~Rectangle(){
            cout << "Your Rectangle Died\n";
        }

};

Rectangle :: Rectangle(){
    length = 0;
    width = 0;
}

class Triangle{

    private : 

        float base;
        float height;

    public: 

        Triangle();

        Triangle(float b, float h){
            
            base = b;
            height = h;
        }

        float area(){
            return (0.5*base*height);
        }

        float perimeter(float l1 , float l2, float l3){
            return (l1 + l2 + l3);
        }

        ~Triangle(){
            cout << "Your Triangle Died\n";
        }
};

Triangle :: Triangle(){
    base = height = 0;
}

int main(){

    int op = -1;

    while(op!=4){

        cout << "Choose Your Geometry : \n1.Square\n2.Rectangle\n3.Triangle\n4.End\n:";
        cin >> op;

        
        if(op==1)
        {

            int sq_op = -1;
            float l;
            cout << "Enter Square Length : " << endl;
            cin >>  l;
            Square s1(l);


            while(sq_op != 3)
            {
                cout << "Enter Your Option : \n1.Area\n2.Perimeter\n3.End Square\n";
                cin >> sq_op;

                if(sq_op == 1)
                    cout << "Area Of Square : " << s1.area() << endl;

                else if(sq_op == 2)
                    cout << "Perimeter Of Square : " << s1.perimeter() << endl;

                else if(sq_op == 3)
                    cout << "Square Ended\n";
        

                else 
                    cout << "Invaid Input, Try Again : " << endl;
            }

        }

        else if(op==2)
        {

            int rec_op = -1;
            float l, w;
            cout << "Enter Rectangle Length, Width : " << endl;
            cin >>  l >> w;
            Rectangle r1(l, w);

            while(rec_op != 3)
            {
                cout << "Enter Your Option : \n1.Area\n2.Perimeter\n3.End Rectangle\n";
                cin >> rec_op;
            
                if(rec_op == 1)
                    cout << "Area Of Rectangle : " << r1.area() << endl;

                else if(rec_op == 2)
                    cout << "Perimeter Of Rectangle : " << r1.perimeter() << endl;

                else if(rec_op == 3)
                    cout << "Rectangle Ended\n";
        

                else 
                    cout << "Invaid Input, Try Again : " << endl;
            }
        }

        else if(op==3)
        {

            int tri_op = -1;
            float b, h;
            cout << "Enter Triangle Base, Height : " << endl;
            cin >>  b >> h;
            Triangle t1(b, h);

            while(tri_op != 3)
            {
                cout << "Enter Your Option : \n1.Area\n2.Perimeter\n3.End Triangle\n";
                cin >> tri_op;
            
                if(tri_op == 1)
                    cout << "Area Of Triangle : " << t1.area() << endl;

                else if(tri_op == 2){

                    float l1, l2, l3;
                    cout << "Enter Lenghts:\n";
                    cin >> l1 >> l2 >> l3;
                    cout << "Perimeter Of Triangle : " << t1.perimeter(l1, l2, l3) << endl;

                }   
                else if(tri_op == 3)
                    cout << "Triangle Ended\n";

                else 
                    cout << "Invaid Input, Try Again : " << endl;
            }
        }

        else if (op == 4)
            op = 4;

        else
            cout << "Invalid input, Try Again : \n";

    }

    cout << "Program Ended\n";


    return 0;
}