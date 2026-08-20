#include "car.h"

#include <iostream>
#include <string>
 
void Car :: setMaker(string mk){
    maker  = mk;
}

string Car :: getMaker(){
    return maker;
}

void Car :: setModel(int mo){
    model = mo;
}

int Car :: getModel(){
    return model;
}

Car :: Car(string mk, int mo, string co){
    maker = mk;
    model = mo;
    color = co;
}

Car :: ~Car(){
    cout << "Object Life Time Ended\n";
}