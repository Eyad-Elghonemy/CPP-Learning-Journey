#include <iostream>
#include <string>
using namespace std;

class Counter {

    private:
        unsigned int count;

    public : 
        
    Counter() : count(0)
    { }
    
    Counter(int c) : count(c)
    { }

    int get_count()
    {
        return count;
    }

    Counter operator ++ ()   //--> Operator Overloading
    {
        ++count;
        return Counter(count);
    }

    Counter operator -- (int)   //--> Operator Overloading
    {
        count--;
        return Counter(count);
    }

    

};

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

        Distance operator + (Distance d2)
        {
            int f = feet + d2.feet;
            int i = incheas + d2.incheas;

            return Distance(f, i);

        }

        Distance operator -(Distance d2) {
            int f = feet - d2.feet;
            int i = incheas - d2.incheas;

            return Distance(f, i);
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

    Counter c1(5);
    Counter c2(10);
    Counter c3 = ++c1;
    Counter c4 = c2--;


    // cout << c1.get_count() << endl;
    // cout << c2.get_count() << endl;
    // cout << c3.get_count() << endl;
    // cout << c4.get_count() << endl;

    Distance d1(3, 4);
    Distance d2(5, 10);

    Distance d3 = d1 + d2;

    d3.print();



    return 0;
}