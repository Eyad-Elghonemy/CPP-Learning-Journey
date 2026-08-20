#ifndef CAR_H
#define CAR_H

#include <string>

using namespace std;

class Car{

    private:
        string maker;
        int model;
        string color;

    public:

        void setMaker(string mk);
        string getMaker();
        void setModel(int mo);
        int getModel();

        Car(string mk, int mo, string co);
        ~Car();

};

#endif