#include <iostream>
#include <cmath>
#include <climits>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

// float Max(float arr[], int size, int &c);

// float Sum(float arr[], int size);
void print_Arr(float arr[], int size);
void shift_to_left(float arr[], int size);
void shift_to_right(float arr[], int size);
float average(float arr[], int size, int &v);
void reverse(float arr[], float new_arr[] ,int size);

int main(){

    const int size = 5;
    float arr[size];

    cout << "Enter The Array Values : " << endl;

    for(int i =0; i<size; i++)
        
        cin >> arr[i];
    

//     float s = Sum(arr,size);

//     cout << "Sum Of Array Values : " << s << endl;

    // int c = 0;
    // float m = Max(arr, size, c);

    // cout << "Max Value : " << m << " ,And Smallest Index Of The Largest Value Is : " << c << endl;

    // cout << "Array Before Shifting : " << endl;

    // print_Arr(arr, size);

    // // shift_to_left(arr, size);
    // shift_to_right(arr, size);

    // cout << "Array After Shifting : " << endl;

    // print_Arr(arr, size);


    // int v = 0;
    // float a = average(arr, size, v);

    // cout << "Average : " << a << " ,And There're A " << v << " Number Above The Average\n";

    float new_arr[size];

    print_Arr(arr, size);

    reverse(arr, new_arr , size);

    print_Arr(new_arr, size);

    return 0;
}

// float Sum(float arr[], int size){
//     float s = 0;
//     for(int i =0; i<size; i++)
//         s += arr[i];
//     return s;

// }

// float Max(float arr[], int size, int &c){
    
//     float m = arr[0];
//     c = 0;

//     for(int i = 0; i<size; i++){
        
//         if(arr[i]>m){
//             m = arr[i];
//             c = i;
//         }
//     }
//     return m;

// }

void print_Arr(float arr[], int size){
    for(int i = 0; i<size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// void shift_to_left(float arr[], int size){
//     float temp = arr[0];
//     for(int i = 1; i<size; i++)
//         arr[i-1] = arr[i];
//     arr[size-1] = temp;
// }

// void shift_to_right(float arr[], int size){
//     float temp = arr[size-1];
//     for(int i = (size-1); i>0; i--)
//         arr[i] = arr[i-1];

//     arr[0] = temp;
// }

// float average(float arr[], int size, int &v){
//     float sum = 0;
//     for(int i =0; i< size; i++)
//         sum += arr[i];
    
//     float av = sum / 100.0;


//     for(int i = 0 ; i<size; i++){
//         if(arr[i]>av)
//             v++;
//     }

//     return av;

// }

// void reverse(float arr[], float new_arr[] ,int size){
//     for(int i = size-1,  j = 0; i >= 0; i--, j++)
//         new_arr[j] = arr[i];
    
// }