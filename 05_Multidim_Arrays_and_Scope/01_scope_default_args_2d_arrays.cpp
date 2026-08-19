#include <iostream>
using namespace std;



// void swap(int &x, int &y){
//     int temp = x;
//     x = y;
//     y = temp;
// }

// void swap(int x=0, int y=0){
    
//     int temp = x;
//     x = y;
//     y = temp;

// }

// int x = 100;


// bool find_item(int list[], int search_item, int size);

void print_sum_of_all(float list[][3], int rows);
void print_sum_of_diagonal(float list[][3], int rows);
int main(){

    // int x = 10;

    // cout << "Global X : " << ::x << endl;
    // cout << "Main X : " << x << endl;

    // cout << "====================================================\n";

    // {
    //     int x = 5;
    //     cout << "Global X : " << ::x << endl;
    //     cout << "Inner X : " << x << endl;        
    // }

    // int n1, n2;

    // cout << "Enter Two Numbers => " << endl;
    // cin >> n1 >> n2;
    // swap(n1, n2);

    // cout << "Num 1 => " << n1 << "\nNum 2 => " << n2 << endl;

    // const int size = 10;
    // float salary[size];
    // float sum = 0;


    // cout << "Enter 10 Employees Salaries : " << endl;
    // for(int i = 0; i< size ;i++){
    //     cin >> salary[i];
    //     salary[i] += salary[i]*0.1;
    //     sum += salary[i];
    // }

    // cout << "Average Salary Value => " << sum/10.0 << endl;

    // const int size = 5;
    // int list[size] = {1, 5, 7, 99, 78};

    // int search_item = 99;

    // if(find_item(list, search_item, size))
    //     cout << "Item Isn't In List\n";
    

    // else    
    //     cout << "Item Is Isn't In List\n";

    const int rows = 5;
    const int cols = 3;

    float list[rows][cols];

    print_sum_of_all(list, rows);

    print_sum_of_diagonal(list, rows);


    // float marks [6][3] = {{1, 2, 3},
    //                       {1, 2, 3},
    //                       {1, 2, 3},
    //                       {1, 2, 3},
    //                       {1, 2, 3},
    //                       {1, 2, 3}};

    


    return 0;
}

void print_sum_of_all(float list[][3], int rows){
    float sum = 0;
    for(int i = 0; i<rows; i++)
        for(int j = 0; j< 3; j++)
            sum += list[i][j];

    cout << "Sum Of All Items => " << sum << endl;
}


void print_sum_of_diagonal(float list[][3], int rows){

    float sum = 0;
    for(int i = 0; i<rows && i<3 ; i++)
        sum += list[i][i];
            
    cout << "Sum Of Main Diagonal Items => " << sum << endl;
    

}


// bool find_item(int list[], int search_item, int size){
    
//     bool found = false;

//     for(int i = 0; i<size; i++){
//         if(list[i]==search_item){
//             found = true;
//             break;
//         }
//     }
//     return found;
// }