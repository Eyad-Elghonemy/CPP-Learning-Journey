#include <iostream>
using namespace std;

int main() {
    
    int i;
    float *ptr;
    cout << "Enter The Size Of Array : " << endl;
    cin >> i;

    ptr = new float[i];

    delete [] ptr;  // Delete Array

    return 0;
}