# include <iostream>
using namespace std;

int square(int n);
int sum(int arr[], int size);
float avg(int arr[], int size);

struct Employee{
    int empno;
    string fname;
    string lname;
    float salary;
    float bonus;

};

struct Video{
    string title;
    float duration;
    int views;
    int likes;
};

class Car{
    private:
        string brand;
        float speed;

    public:

        void setData(string b, float s){
            brand = b;
            speed = s;
        }

        void showData(){
            cout << "Brand => " << brand << endl;
            cout << "Speed => " << speed << endl;
        }

};

class Employeee{
    
    private:
        string name;
        float salary;

    public:
        void setName(string n){
            name = n;
        }

        void setSalary(){
            cout << "Enter Salary : " << endl;
            cin >> salary;
        }

        string getName(){
            return name;
        }

        float getSalary(){
            return salary;
        }

};

class Calculator{
    public:
        int add(int n1, int n2){
            return (n1 + n2);
        }
        int add(int n1, int n2, int n3){
            return (n1 + n2 + n3);
        }
};

class Student{
    private:
        string name;
        int id;

    public:
        Student(): name("Unknown"), id(0) {};

        void printInfo(){
            cout << "Name => " << name << endl;
            cout << "ID => " << id << endl;
        }

};

class Box{
    private:
        float side;

    public:
        void setSide(float s){
            side = s;
        }
        float getSide(){
            return side;
        }
};

void showBox(Box b){
    cout << "Side => " << b.getSide() << endl;
}

int main(){

    // int N;
    // cout << "Enter Number : " << endl;
    // cin >> N;

    // int f = 1;
    // for(int i = N; i>=1; i--)
    //     f *= i;

    // cout << "Factorial Of " << N << " = " << f << endl;

    // ------------------------------------------------------------------------------------------------------

    // int n;
    // cout << "Enter Number : " << endl;
    // cin >> n;

    // cout << "Square Of " << n << " = " << square(n) << endl;

    // ------------------------------------------------------------------------------------------------------

    // int size;
    // cout << "Enter Size Of Array: " << endl;
    // cin >> size;

    // int arr[size];
    // cout << "Enter Numbers : " << endl;
    // for(int i = 0; i<size; i++)
    //     cin >> arr[i];

    // int s = sum(arr, size);
    // float v = avg(arr, size);

    // cout << "Sum Of All Elements = " << s << endl;
    // cout << "Average Elements = " << v << endl;

    // ------------------------------------------------------------------------------------------------------

    // int mat[3][3];

    // cout << "Enter The Matrix Values : " << endl;
    // for(int r = 0; r<3; r++)
    //     for(int c = 0; c<3; c++)
    //         cin >> mat[r][c];

    // for(int r = 0; r<3; r++){
    //     for(int c = 0; c<3; c++)
    //             cout << mat[r][c] << " ";
    //     cout << endl;
    // }
    

    // for(int i = 0; i<3 ; i++)
    //     cout << mat[i][i] << " ";

    
    // ------------------------------------------------------------------------------------------------------

    // Employee e1;
    // e1.empno = 1323;
    // e1.fname = "Eyad";
    // e1.lname = "Elghonemy";
    // e1.salary = 15000;
    // e1.bonus = 3000;

    // cout << "Emplyee Number => " << e1.empno << endl;
    // cout << "Emplyee Name => " << e1.fname << " " << e1.lname << endl;
    // cout << "Emplyee Net Salary => " << e1.salary + e1.bonus << endl;  


    // Video v1 = {"Cats vs. Dogs", 23.55, 100000, 50000};
    // cout << "Video Title => " << v1.title << endl;
    // cout << "Duration => " << v1.duration << endl;
    // cout << "Views => " << v1.views << endl;
    // cout << "Likes => " << v1.likes << endl; 

    // ------------------------------------------------------------------------------------------------------

    // Car c1;
    // c1.setData("KIA", 250);
    // c1.showData();

    // ------------------------------------------------------------------------------------------------------

    // Employeee e1;
    // e1.setName("Eyad");
    // e1.setSalary();
    // cout << "Name => " << e1.getName() << endl;
    // cout << "Salary => " << e1.getSalary() << endl;
    
    // ------------------------------------------------------------------------------------------------------

    // Calculator c1;
    // cout << c1.add(5, 3) << endl;
    // cout << c1.add(5, 3, 7) << endl;

    // ------------------------------------------------------------------------------------------------------

    // Student s1;
    // s1.printInfo();

    // ------------------------------------------------------------------------------------------------------

    Box b1;
    b1.setSide(55.66);
    showBox(b1);

    return 0;
}

int square(int n){

    return (n*n);
}

int sum(int arr[], int size){
    int s = 0;

    for(int i = 0; i<size; i++)
        s += arr[i];

    return s;
}

float avg(int arr[], int size){
    float f = sum(arr, size) / static_cast<float>(size);
    return f;
}

