/*OVERLOADING*/

#include <iostream>
#include <string>
using namespace std;
class Distance{

    private:
        float feet;
        float incheas;
        static int counter;

    public:

        Distance():feet(0), incheas(0)
        {
        }

        Distance(float ft, float in): feet(ft), incheas(in)
        {
            counter ++;
        }

        void setDistance(float f, float i)
        {
            feet = f;
            incheas = i;
        } 

        void print();

        Distance add_distance(Distance d2){
            
            Distance result;
            result.feet = feet + d2.feet;
            result.incheas = incheas + d2.incheas;

            return result;
        }

        int GetCounter(){
            return counter;
        }

        ~Distance()
        {
        }

};

int Distance :: counter = 0;

void Distance :: print(){
    cout << "Feet : " << feet << '\n' << "Inches : " << incheas << endl;
}


int main() {

    // Distance d1;
    // Distance d2(11, 6.25);
    // Distance d3(d2);   // Copy Contruactor
    // Distance d4 = d2;  // Copy Contruactor
    // d3.print();
    // d3.setDistance(7, 4.25);
    // Distance d5 = d3;
    // d5.print();

    Distance obj1(5, 3.5);
    Distance obj2(7, 4.25);

    Distance d3 = obj1.add_distance(obj2);

    d3.print();

    cout << d3.GetCounter();

    return 0;
}