#include <iostream>
#include <cmath>
#include <climits>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

const int Number_of_Letters = ('z' - 'a') + 1;
const int Number_of_Random_Letters = 100;
void createArr(char []);
void displayArr(const char []);
void countLetters(const char [], int []);
void disolaycounts(const int []);

int main(){

    char chars[Number_of_Random_Letters];

    createArr(chars);

    cout << "The Lowercase letters are : " << endl;
    displayArr(chars);

    int counts[Number_of_Letters];
    countLetters(chars, counts);
    
    cout << "\nThe Occurences Of Each Letter Are : " << endl;
    disolaycounts(counts);

    return 0;
}

void createArr(char chars[]){  // تم حذف const هنا فقط
    srand(time(0));
    for(int i = 0 ; i<Number_of_Random_Letters; i++)
        chars[i] = static_cast<char>('a' + rand() %('z'-'a' + 1));
}

void displayArr(const char chars[]){  // تم تصحيح عدد التكرار هنا فقط
    for(int i = 0; i<Number_of_Random_Letters; i++){
        if((i + 1) % 20 == 0)
            cout << chars[i] << " " << endl;
        else    
            cout << chars[i] << " ";
    }
}

void countLetters(const char chars[], int counts[]){
    for(int i = 0; i<Number_of_Letters; i++)
        counts[i] = 0;

    for(int i = 0; i<Number_of_Random_Letters; i++)
        counts[chars[i] - 'a']++;
}

void disolaycounts(const int counts[]){  // سيبنا اسم الدالة زي ما هو بناءً على طلبك
    for(int i = 0; i < Number_of_Letters; i++){
        if((i + 1) % 10 == 0)
            cout << counts[i] << " " << static_cast<char>(i + 'a') << endl;
        
        else
            cout << counts[i] << " " << static_cast<char>(i + 'a') << " ";
  }
}
