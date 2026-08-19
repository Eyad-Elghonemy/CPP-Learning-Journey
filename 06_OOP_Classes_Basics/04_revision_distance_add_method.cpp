# include <iostream>
# include <cmath>
# include <limits>
# include <iomanip>
# include <cstdlib>
# include <ctime>
using namespace std;

class Distance{

    private : 
        float feet;
        float inches;

    public:

        Distance(): feet(0), inches(0){};

        Distance(float ft, float in){
            feet = ft;
            inches = in;
        }

        Distance add_distance(Distance d2){

            Distance resault;
            resault.feet = feet + d2.feet;
            resault.inches = inches + d2.inches;

            return resault;

        }

        float getDistanceFeet(){
            return feet;
        }

        float getDistanceInches(){
            return inches;
        }

};


int main(){

    Distance d1(5, 3.5);
    Distance d2(3, 4.25);

    Distance d3 = d1.add_distance(d2);

    cout << "D1 => " << d1.getDistanceFeet() << " ft, And => " << d1.getDistanceInches() << endl;
    cout << "D2 => " << d2.getDistanceFeet() << " ft, And => " << d2.getDistanceInches() << endl;
    cout << "D3 => " << d3.getDistanceFeet() << " ft, And => " << d3.getDistanceInches() << endl;



    return 0;
}