# include <iostream>
using namespace std;


class ElectricityBill{

    private:
        string name;
        int id;
        double electricityunits;


    public:
        ElectricityBill():name(" "), id(0), electricityunits(0){}
        ElectricityBill(string n, int i, double e): name(n), id(i), electricityunits(e) {}
        ~ElectricityBill(){cout << "Object Usage Ended\n";}
        
        void insert(string n, int i, double e){
            name = n;
            id = i;
            electricityunits = e;
        }

        double calcBill(){
            
            if(electricityunits > 200)
                return (electricityunits * 3);

            else if(electricityunits > 100)
                return (electricityunits * 2);

            else
                return (electricityunits * 1.2);
        }

        void display(){
            cout << "\n-------------EBill-------------\n";
            cout << "Name => " << name << endl;
            cout << "Customer Number => " << id << endl;
            cout << "Bill Amount => " << calcBill() << endl;
            cout << "\n-------------------------------\n" ;
        }

};

int main(){

    ElectricityBill e1;
    ElectricityBill e2("Ali", 1, 98);
    e1.insert("Ahmed", 2, 149);


    e1.display();
    e2.display();


    return 0;
}