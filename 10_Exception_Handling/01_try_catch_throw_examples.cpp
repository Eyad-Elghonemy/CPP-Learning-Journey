# include <iostream>
# include <cmath>
# include <limits>
# include <iomanip>
# include <cstdlib>
# include <ctime>
using namespace std;

int main(){

    // int x = 10, y=0; 

    // try{
    //     if(y==0)
    //         throw exception();

    //     else 
    //         cout << x/y << endl;
    // }

    // catch(exception e){
    //     cout << e.what() << endl;
    // }

    // cout << "Program Continued\n";

    // int x = 10, y=0; 

    // try{
    //     if(y==0)
    //         throw "Division By Zero Exxception\n";

    //     else 
    //         cout << x/y << endl;
    // }

    // const char* msg --> String
    // catch(const char* msg){

    //     cout << msg << endl;
    //     cout << "Y can't Be Zero\n";
    // }

    // cout << "Program Continued\n";

    // try {
    //     int age = 15;
    //     if(age>18){
    //         cout << "Access Granted - You Are Old Enough\n";
    //     }else{
    //         throw(age);
    //     }
    // }
    // catch(int myNum){
    //     cout << "Access Denied - You Must Be At Least 18 Years Old\n";
    //     cout << "Age Is : " << myNum;
    // }

    // int x = 0, y = 0;
    // cout << "Enter Values For X And Y : " << endl;
    // cin >> x >> y;

    // try{
    //     if(y==0)
    //         throw exception();

    //     else 
    //         cout << x/y << endl;
    // }
    // catch(exception e){
    //     cout << e.what() << endl;
    //     cout << "Review Your Input\n";
    // }

    // cout << "Prog Continued\n";
    // cout << x + y + 100 << endl;

        int x = 0, y = 0;
    cout << "Enter Values For X And Y : " << endl;
    cin >> x >> y;

    try{

        if(x<30)
            throw "X Exception";

        if(y==0)
            throw exception();

        
    
        else 
            cout << x/y << endl;
    }
    // catch(exception e){
    //     cout << e.what() << endl;
    //     cout << "Review Your Input\n";
    // }

    // catch(const char * msg){
    //     cout << msg << endl;
    //     cout << "X Must Be Grater Than 30\n";
    // }

    catch(...){
        cout << "UnHandled Exception\n";
        cout << "Contact System Admin\n";
    }


    cout << "Prog Continued\n";
    cout << x + y + 100 << endl;

    return 0;
}