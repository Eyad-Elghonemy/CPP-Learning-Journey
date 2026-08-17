/*
    Function
    - Parameters & Arguments Training
    --- Create Ice Box
    --- Simple Calculator
*/


#include <iostream>
using namespace std;

void iceBox(string , string );
void calc(float &, float &, char &);

int main(){

    float n1, n2;
    char op;

    

    cout << "Enter Number One : " << endl;
    cin >> n1;
    cout << "Enter The Operation : " << endl;
    cin >> op;
    cout << "Enter Number Two : " << endl;
    cin >> n2;

    iceBox("Coca Cola", "Cold");
    iceBox("Apple", "Fresh");
    iceBox("Juice", "Fresh");
    iceBox("TV Remote", "Red");

    calc(n1, n2, op);

    return 0;
}

void iceBox(string item, string action){

    if(item == "Coca Cola")

        cout << item << " Will Be More " << action << endl;
    

    else if(item == "Apple" || item == "Juice")

        cout << item << " Will Be More " << action << endl;

    else
        cout << item << " Is Invalid\n";
    
    
}

void calc(float &numone, float &numtwo, char &op){

    switch (op)
    {
    
    case '+' : cout << numone << " + " << numtwo << " = " << numone + numtwo << endl;
    break;

    case '-' : cout << numone << " - " << numtwo << " = " << numone - numtwo << endl;
    break;
    
    case '*' : cout << numone << " * " << numtwo << " = " << numone * numtwo << endl;
    break;

    case '/': if(numtwo == 0)
                cout << "Can't Divide By Zero\n";
            else 
                cout << numone << " / " << numtwo << " = " << numone / numtwo << endl;
    break;

    default: cout << "Invalid Input" << endl;
        break;
    }

}

