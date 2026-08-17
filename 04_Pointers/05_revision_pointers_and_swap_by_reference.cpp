# include <iostream>
# include <cmath>
# include <limits>
# include <iomanip>
# include <cstdlib>
# include <ctime>
using namespace std;

void swap(double & x, double & y);
void swap(double* ptr1, double* ptr2);

int main(){

    // int i = 17;
    // int * ptr;
    // ptr = & i;

    // cout << "Address Of I => " << ptr << endl;
    // cout << "Value Of I => "  << *ptr << endl;

    // *ptr += 5;

    // cout << "Address Of I => " << ptr << endl;
    // cout << "Value Of I => "  << *ptr << endl;

    // int x = 12;
    // int * ptr;

    // ptr =& x;

    // cout << "Address Of I => " << ptr << endl;
    // cout << "Value Of I => "  << *ptr << endl;

    // *ptr += 10;

    // cout << "X => " << x << endl;
    // cout << "Address Of I => " << ptr << endl;
    // cout << "Value Of I => "  << *ptr << endl;

    // char msg[] = "Hello";
    // char * ptr;
    // ptr = msg;
    // cout << "First Element => " << *ptr << endl;
    // *ptr = 'M';
    // cout << "First Element After Edit => " << *ptr << endl;

    // ptr++;
    // cout << "Second Element => " << *ptr << endl;
    // *ptr = 'a';
    // cout << "Second Element After Edit => " << *ptr << endl;
    // cout << "Null => " << msg[5];

    // cout << msg << endl;

    // int arr[5] = {23, 5, 12, 34,17};
    // for(int i=0; i<5; i++){
    //     cout << arr++ << endl;
    // }

    double a = 3.0;
    double b = 5.0;
    swap(a, b); // By Refrence
    cout << "A => " << a << " , B => " << b << endl;

    swap(&a, &b); // By Pointer
    cout << "A => " << a << " , B => " << b << endl;



    return 0;
}

void swap(double & x, double & y){
    double tmp = x;
    x=y;
    y = tmp;
}

void swap(double* ptr1, double* ptr2){
    double tmp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = tmp;
}