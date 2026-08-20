#include <iostream>
#include <string>

#include "car.h"

int main(){

    Car c1("Honda", 2019, "Red");
    Car c2("KIA", 2020, "White");

    cout << "This Car Made By : " << c2.getMaker() << endl;
    cout << "This Car Model Is : " << c2.getModel() << endl;
    
    return 0;
}