#include <iostream>
using namespace std;

/*
Pointers 
 -- Pointer Arithmatic 
 -- Pointer And Array

*/

int main(){

    int nums[]{10,20,30,40, 50};

    cout << nums << "\n";  // 1st Element => Memory Address
    cout << &nums[0] << "\n";  // 1st Element => Memory Address

    cout << nums[0] << "\n";  // 1st Element => 10
    cout << *nums << "\n";  // 1st Element => 10

    cout << nums[1] << "\n";  // 2nd Element => 20
    cout << *(nums + 1) << "\n";  // 2nd Element => 20

    cout << "######################################" << "\n";

    int *ptr = nums;

    cout << ptr << "\n";  // 1st Element => Memory Address
    cout << *ptr << "\n";  // 1st Element => 10

    ptr++; 

    cout << ptr << "\n";  // 2nd Element => Memory Address
    cout << *ptr << "\n";  // 2nd Element => 10

    ptr += 3;

    cout << ptr << "\n";  // Last Element => Memory Address
    cout << *ptr << "\n";  // Last Element => 50


    ptr--; 

    cout << ptr << "\n";  // Before Last Element => Memory Address
    cout << *ptr << "\n";  // Before Last Element => 40


    return 0;

}