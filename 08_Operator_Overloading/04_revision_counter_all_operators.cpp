# include <iostream>
# include <cmath>
# include <limits>
# include <iomanip>
# include <cstdlib>
# include <ctime>
using namespace std;


class Counter{

    private:

        unsigned int count;

    public:

        Counter():count(0){};

        Counter(int c){
            count = c;
        }

        int get_count(){
            return count;
        }

        // Counter merge(Counter c2){
        //     return (count + c2.count);
        // }

        Counter operator ++(){
            ++count;
            return Counter(count);
        }

        Counter operator --(){
            --count;
            return Counter(count);
        }

        Counter operator ++(int){
            count++;
            return Counter(count);
        }


        Counter operator --(int){
            count--;
            return Counter(count);
        }

        // Counter operator + (Counter c2) const {    
        //     int c = count + c2.count;
        //     return Counter(c);

        // }


        Counter operator + (const Counter &c2) const {    
            int c = count + c2.count;
            return Counter(c);

        }

        Counter operator-(const Counter &c2) const {
            int c = count - c2.count;
            return (Counter(c));
        }

        Counter operator *(const Counter &c2) const{
            int c = count * c2.count;
            return (Counter(c));
        }

        Counter operator /(const Counter &c2) const{
            if(c2.count == 0){
                cout << "Error\n";
                return Counter(0);
            }
            else {
                int c = count / c2.count;
                return Counter(c);
            }
        }


};





int main(){

    Counter c1(5);
    Counter c2(10);

    // Unary Operators
    //--> Prefix
    Counter c3 = ++c1;
    Counter c4 = --c2;
    //--> Postfix
    Counter c5 = c1++;
    Counter c6 = ++c1;

    // Binary Operators
    Counter c7 = c1 + c2;
    Counter c8 = c1 - c2;
    Counter c9 = c1 * c2;
    Counter c10 = c1 / c2;




    cout << c3.get_count() << endl;
    cout << c4.get_count() << endl;
    cout << c5.get_count() << endl;
    cout << c6.get_count() << endl;
    cout << c7.get_count() << endl;
    cout << c8.get_count() << endl;
    cout << c9.get_count() << endl;
    cout << c10.get_count() << endl;





    // Counter c3(c1.merge(c2));

    // Counter c3 = c1 + c2;




    return 0;
}