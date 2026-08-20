# include <iostream>
using namespace std;


class CounterType{
    private:
        unsigned int count;

    public:
        void setCount(int c){
            if(c>=0)
                count = c;
            else
                count = 0;
        }
        void incCounter(){
            count++;
        }

        void decCounter(){
            if(count > 0)
                count--;
            else    
                cout << "Count Is Alredy 0\n";
        }

        int getCount(){
            return count;
        }

};

class CarRental{
    private:
        string make;
        string model;
        int year;
        double rentalPricePerDay;

    public:
        CarRental(string mk, string mo, int y, double r){
            make = mk;
            model = mo;
            year = y;
            rentalPricePerDay = r;
        }

        double rent(int days){
            return (days * rentalPricePerDay);
        }

        void display(int days){
            cout << "Car Make => " << make << endl;
            cout << "Car Model =>" << model  << " " << year << endl;
            cout << "Total Cost for " << days << " days => " << rent(days) << endl;        }
};

class BankAccount{
    private:
        string holderName;
        int number;
        double balance;

    public:

        BankAccount(string hn, int n, double b){
            holderName = hn;
            number = n;
            balance = b;
        }

        void deposit(double amount){
            if(amount > 0)
                balance += amount;
            else
                cout << "Invalid Amount\n";
            
            cout << "Successful Transaction\nNew Balance => " << balance << endl;
        }

        void withdraw(double amount){
             if(amount > 0){
                if(amount <= balance)
                    balance -= amount;
                else
                    cout << "Balance Isn't Enough To Withdraw This Amount\n";
            }
            else
                cout << "Invalid Amount\n";

            cout << "Successful Transaction\nNew Balance => " << balance << endl;
        }

        void display(){
            cout << "Name => " << holderName << endl;
            cout << "Number => " << number << endl;
            cout << "Balance => " << balance << endl;
        }


};

class StudentRecord{
    private:
        double quez1, quez2, midterm, final_, weight_avg;
        char letterGrade;

    public:
        StudentRecord(): quez1(0), quez2(0), midterm(0), final_(0){}
        StudentRecord(double q1, double q2, double m, double f): quez1(q1), quez2(q2), midterm(m), final_(f){}
        ~StudentRecord(){
            cout << "Object Usage Ended\n";
        }

        void setQuez1(double q1){
            quez1 = q1;
        }

        void setQuez2(double q2){
            quez2 = q2;
        }

        void setMid(double m){
            midterm = m;
        }

        void setFinal(double f){
            final_ = f;
        }

        double getQuez1(){
            return quez1;
        }

        double getQuez2(){
            return quez2;
        }

        double getMid(){
            return midterm;
        }

        double getFinal(){
            return final_;
        }

        double getWeightAvg(){
            return weight_avg;
        }

        char getLetterGrade(){
            return letterGrade;
        }

        void calcWeightAvg(){
            double qsp = ((quez1 + quez2) / 10) * 100;
            weight_avg = (qsp * 0.25) + (midterm * 0.25) + (final_ * 0.5);
        }

        void calcLetterGrade(){
            if(weight_avg >= 90)
                letterGrade = 'A';
            
            else if(weight_avg >= 80)
                letterGrade = 'B';

            else if(weight_avg >= 70)
                letterGrade = 'C';

            else if(weight_avg >= 60)
                letterGrade = 'D';

            else
                letterGrade = 'F';
        }

};



int main(){

    // CounterType c1;
    // c1.setCount(5);

    // cout << "Initial count = " << c1.getCount() << endl;

    // c1.incCounter();
    // cout << "After increment = " << c1.getCount() << endl;

    // c1.decCounter();
    // c1.decCounter();
    // cout << "After two decrements = " << c1.getCount() << endl;

    // c1.setCount(-10);
    // cout << "After setting to -10 = " << c1.getCount() << endl;

    // -------------------------------------------------------------

    // CarRental car1("Toyota", "Corolla", 2020, 350.0);
    // int days;
    // cout << "Enter number of rental days: ";
    // cin >> days;

    // car1.display(days);

    // -------------------------------------------------------------

    // BankAccount acc1("Eyad", 12345, 1000.0);

    // acc1.display();

    // acc1.deposit(500);
    // acc1.withdraw(200);
    // acc1.withdraw(2000);

    // -------------------------------------------------------------

    StudentRecord s1;
    StudentRecord s2(18, 20, 70, 90);
    
    s1.setQuez1(12);
    s1.setQuez2(15);
    s1.setMid(80);
    s1.setFinal(85);

    s1.calcWeightAvg();
    s2.calcWeightAvg();

    s1.calcLetterGrade();
    s2.calcLetterGrade();




    return 0;
}