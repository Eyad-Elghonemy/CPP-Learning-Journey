# include <iostream>
using namespace std;

// class Counter{
//     private:
//         unsigned int count;

//     public:
//         Counter(): count(0) {}
//         Counter(int c): count(c) {}

//         unsigned int get_count() {return count;}

//         Counter operator ++ (){
//             Counter temp(++count);
//             return temp;
//         }

//         Counter operator ++ (int) {
//             Counter temp(count++);
//             return temp;
//         }

// };

// class Complex {
//     private:
//         float real, imaginary;

//     public:
//         Complex() : real(0), imaginary(0) {}
//         Complex(float r, float i) : real(r), imaginary(i) {}

//         Complex operator + (Complex other) const {
//             Complex temp;
//             temp.real = real + other.real;
//             temp.imaginary = imaginary + other.imaginary;
//             return temp;
//         }

//         Complex operator - (Complex other) const {
//             Complex temp;
//             temp.real = real - other.real;
//             temp.imaginary = imaginary - other.imaginary;
//             return temp;
//         }

//         Complex operator * (Complex other) const{
//             Complex temp;
//             temp.real = (real * other.real) - (imaginary * other.imaginary);
//             temp.imaginary = (real * other.imaginary) + (imaginary * other.real);
//             return temp;
//         }
// };

// class Box {
//     private:
//         float length, weidth, height;

//     public:
//         Box(float l, float w, float h) : length(l), weidth(w), height(h) {}
//         bool operator == (Box other) const{
//             return ((length == other.length) && (weidth == other.weidth) && (height == other.height));
//         }
//         float volume() const{
//             return (length*weidth*height);
//         }
//         bool operator < (Box other)  const{
//             return (volume() < other.volume());
//         }
// };

class StudentRecord{
    private:
        float quez1,quez2,midterm,final, weightavg;
        char lettergrade;

    public:
        StudentRecord(): quez1(0), quez2(0), midterm(0), final(0), weightavg(0), lettergrade(' ') {}
        StudentRecord(float q1, float q2, float m, float f): quez1(q1), quez2(q2), midterm(m), final(f) {}
        ~StudentRecord() {cout << "Object Removed!\n";}
        
        void setQuez1(float q1) {quez1 = q1;}
        void setQuez2(float q2) {quez2 = q2;}
        void setMidTerm(float m) {midterm = m;}
        void setFinal(float f) {final = f;}

        float getQuez1() {return quez1 ;}
        float getQuez2() {return quez2 ;}
        float getMidTerm() {return midterm;}
        float getFinal() {return final;}
        float getWeightedAvg() {return weightavg;}
        char getLetterGrade() {return lettergrade;}

        void calcWeightedAverage(){
            float quizesPercent = ((quez1+quez2)/20) * 100;
            weightavg = (quizesPercent * 0.25) + (midterm * 0.25) + (final * .50);
        }

        void calcLetterGrade(){
            if (weightavg >= 90)
                lettergrade = 'A';
            else if (weightavg >= 80)
                lettergrade = 'B';
            else if (weightavg >= 70)
                lettergrade = 'C';    
            else if (weightavg >= 60)
                lettergrade = 'D';
            else
                lettergrade = 'f';
        }
};


int main(){

    // Counter c1;
    
    // Box b1(3, 6.6, 7.8);
    // Box b2(5, 1.6, 8.8);
    // cout << (b1 == b2) << endl;
    // cout << (b2 < b1) << endl; 



    return 0;
}