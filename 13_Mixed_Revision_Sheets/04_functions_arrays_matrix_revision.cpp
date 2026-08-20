# include <iostream>
# include <cmath>
using namespace std;


void large(int n1, int n2);
float area(float r);
float volume(float r);
int sum(int n1, int n2, int n3=0);
float average(int n1, int n2, int n3);
void swap_n(int n1, int n2);
void swap_r(int &n1, int &n2);
float calc_avg(int list[], int size);
bool is_contain_target(int list[], int target, int size);
int sum_of_all(int matrix[][3], int row);
int sum_of_diag(int matrix[][3], int row);

const float PI = 3.141;
int x = 100;


int main(){

    // cout << floor(15.99) << endl;
    // cout << ceil(15.001) << endl;
    // cout << pow(-2, 5) << endl;
    // cout << abs(-2) << endl;
    // cout << sqrt(100) << endl;
    
    // -------------------------------------------------------

    // int n1, n2;
    // cout << "Enter The Two Numbers: " << endl;
    // cin >> n1 >> n2;
    // large(n1, n2);

    // -------------------------------------------------------

    // float r;
    // cout << "Enter The Raduis Of Sphere: " << endl;
    // cin >> r;

    // cout << "Area Of Sphere: " << area(r) << endl;
    // cout << "Volume Of Sphere: " << volume(r) << endl;

    // -------------------------------------------------------

    // int n1, n2, n3;
    // cout << "Enter 3 Integer Numbers: " << endl;
    // cin >> n1 >> n2 >> n3;

    
    // cout << "Sum Of Numbers : " << sum(n1, n2, n3) << endl;
    // cout << "Average Of Numbers : " << average(n1, n2, n3) << endl;
    // cout << "Sum Of 2 Numbers : " << sum(n1, n2) << endl;

    // -------------------------------------------------------

    // int n1, n2;

    // cout << "Enter 2 Integer Numbers: " << endl;
    // cin >> n1 >> n2;
    // // swap_n(n1, n2); 
    // swap_r(n1, n2);
    // cout << "N1 => " << n1 << ", N2 => " << n2 << endl;


    // -------------------------------------------------------

    // int x = 10;
    // cout << "Global x => " << ::x << ", Main x => " << x << endl;
    
    // {
    //     int x = 250;
    //     cout << "Global x => " << ::x + 5 << ", Inner Block x => " << x << endl;
    // }

    // cout << "Global x => " << ::x << ", Main x => " << x << endl;

    // -------------------------------------------------------

    // const int size = 5;
    // int list[size];

    // cout << "Enter 5 Elements : " << endl;
    // for(int i = 0; i< size ; i++)
    //     cin >> list[i];

    // // cout << "Average Of List => " << calc_avg(list, size) << endl;

    // int target;
    // cout << "Enter Target : " << endl;
    // cin >> target;

    // if(is_contain_target(list, target, size))
    //     cout << "List Contain Target\n";

    // else    
    //     cout << "List Not Contain Target\n";

    // -------------------------------------------------------

    // float marks [6][4] = {{1, 2, 3, 4},
    //                       {10, 20, 30, 40},
    //                       {11, 22, 33, 44},
    //                       {17, 27, 37, 47},
    //                       {18, 28, 38, 48},
    //                       {19, 29, 39, 49}};


    // cout << marks[3][2] << endl;

    const int row = 5;
    const int col = 3;

    int matrix[row][col];

    for(int r = 0; r < row; r++)
        for(int c = 0; c<col; c++)
            cin >> matrix[r][c];

    cout << "Sum Of All Elements => " << sum_of_all(matrix, row) << endl;
    cout << "Sum Of All Diagonal => " << sum_of_diag(matrix, row) << endl;


    return 0;
}

void large(int n1, int n2){
    if(n1 > n2)
        cout << n1 << " Larger Than " << n2 << endl;
    else
        cout << n2 << " Larger Than " << n1 << endl;
}

float area(float r){
    return (4 * PI * r * r);
}

float volume(float r){
    return ((4.0/3) * PI * r * r * r);
}

int sum(int n1, int n2, int n3){
    return (n1 + n2 + n3);
}

float average(int n1, int n2, int n3){

    return (sum(n1, n2, n3)/3.0);
}

void swap_n(int n1, int n2){
    int tmp = n1;
    n1 = n2;
    n2 = tmp;
    cout << "N1 => " << n1 << ", N2 => " << n2 << endl;
}

void swap_r(int &n1, int &n2){
    int tmp = n1;
    n1 = n2;
    n2 = tmp;
}

float calc_avg(int list[], int size){
    float sum = 0;
    for(int i = 0 ; i<size; i++)
        sum += list[i];

    return sum/size;
}

bool is_contain_target(int list[], int target, int size){

    bool found = false;
    for(int i = 0; i<size; i++){
        if(list[i] == target){
            found = true;
            break;
        }
    }
    return found;
}

int sum_of_all(int matrix[][3], int row){
    int sum = 0;
    for(int r = 0; r<row; r++)
        for(int c = 0; c<3; c++)
            sum += matrix[r][c];

    return sum;
}

int sum_of_diag(int matrix[][3], int row){

    int sum = 0;
    for(int i = 0; i<row && i<3; i++)   
        sum += matrix[i][i];

    return sum;
}

