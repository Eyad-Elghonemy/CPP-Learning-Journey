# include <iostream>
using namespace std;

// class Time{
//     private:
//         int hours, minutes, seconds;

//     public:
//         Time(): hours(0), minutes(0), seconds(0) {}
//         Time(int h, int m, int s): hours(h), minutes(m), seconds(s) {}

//         Time operator + (Time other) const {
//             Time temp;
//             temp.seconds = seconds + other.seconds;
//             temp.minutes = minutes + other.minutes + (temp.seconds / 60);
//             temp.seconds %= 60;
//             temp.hours = hours + other.hours + (temp.minutes / 60);
//             temp.minutes %= 60;
//             return temp;
//         }

//         bool operator == (Time other) const {
//             return ((seconds == other.seconds) && (minutes == other.minutes) && (hours == other.hours));
//         }

//         void display(){
//             cout << hours << ":" << minutes << ":" << seconds << endl;
//         }
// };


// class TemperatureLog {
//     private:
//         float dailytemp[7];

//     public:
        
//         TemperatureLog() {
//             for(int i=0; i<7; i++){
//                 cout << "Enter Temperature For Day " << i+1 << endl;
//                 cin >> dailytemp[i];
//             }
//         }

//         float calculateAverageTemperatur(){
//             float sum = 0;

//             for(int i=0; i<7; i++){
//                 sum += dailytemp[i];
//             }
//             return (sum / 7.0);
//         }

//         void display() {
//             for(int i=0; i<7; i++){
//                 cout << "Day " << i+1 << ", Temperature Is: " << dailytemp[i] << endl;
//             }
//         }

//         float findLowestTemperature(){
//             float l = dailytemp[0];
//             for(int i=0; i<7; i++){
//                 if(l>dailytemp[i])
//                     l = dailytemp[i];
//             }
//             return l;
//         }

// };

class Student{
    private:
        string name;
        float marks[3];

    public:
        Student(string n){
            name = n;
            for(int i =0; i<3; i++)
                cin >> marks[i];    
        }

        float  CalculateAverage(){
            float sum = 0;
            for(int i = 0; i<3;i++)
                sum += marks[i];
            return (sum/3.0);
        }

        void display(){
            cout << "Name: " << name << endl; 
        }
        
};

Student findTopScorer(Student arr[], int size){
    Student higherStudent = arr[0];
    for(int i = 0; i<size; i++){
        if (higherStudent.CalculateAverage()<arr[i].CalculateAverage())
            higherStudent = arr[i];
    }
    return higherStudent;
}



int main() {

    // Time t1(3, 20, 50);
    // Time t2(4, 43, 40);

    // Time t3 = t1 + t2;

    // t1.display();
    // t2.display();
    // t3.display();

    // TemperatureLog t1;
    // cout << t1.calculateAverageTemperatur() << endl;
    // t1.display();
    // cout << t1.findLowestTemperature() << endl;

    Student s1("Ahmed");
    Student s2("Ali");
    Student s3("Saeed");

    Student arr[] = {s1, s2, s3};
    Student higherStudent = findTopScorer(arr, 3);
    higherStudent.display();

    


    // Student arr[5];




    return 0;
}