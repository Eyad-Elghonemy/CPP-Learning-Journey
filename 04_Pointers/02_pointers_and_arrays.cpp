#include <iostream>
using namespace std;

/*
Pointers 
 -- Pointing To Array

*/

int main(){


    int nums []{10,20,30,40};

    int *ptr = &nums[0];

    cout << "First Element : " << endl;

    cout << "Value With Index : " << nums[0] << endl;
    cout << "Value With Index : " << *ptr << endl;

    cout << "Address With Index : " << &nums[0] << endl;
    cout << "Address With Index : " << ptr << endl;


    cout << "Second Element : " << endl;

    cout << "Value With Index : " << nums[1] << endl;
    cout << "Value With Index : " << *(ptr + 1) << endl;

    cout << "Address With Index : " << &nums[1] << endl;
    cout << "Address With Index : " << ptr + 1 << endl;


    cout << "Third Element : " << endl;

    cout << "Value With Index : " << nums[2] << endl;
    cout << "Value With Index : " << *(ptr + 2) << endl;

    cout << "Address With Index : " << &nums[2] << endl;
    cout << "Address With Index : " << ptr + 2 << endl;


    return 0;
}