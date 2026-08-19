# include <iostream>
using namespace std;

class Counter {

    private:
        unsigned int count;

    public:
        Counter(): count(0) {}
        Counter(int c): count(c) {}

        unsigned int get_count(){return count;}

        Counter operator ++ () // --> Prefix ++x
        {
            ++count;
            Counter temp;
            temp.count = count;
            return temp;
        }

        Counter operator ++ (int){  // --> Postfix x++
            count++;
            Counter temp;
            temp.count = count;
            return temp;
        }

        Counter operator -- () {   // --> Prefix --x
            --count;
            return Counter(count);
        }

        Counter operator -- (int){   // --> Postfix x--
            
            count --;
            Counter temp;
            temp.count = count;
            return temp;
        }

        
        Counter operator + (Counter c2){
            unsigned int c = count + c2.count;
            return Counter(c);
        }



};





int main(){

    Counter c1, c2;
    cout << c1.get_count() << endl;
    cout << c2.get_count() << endl;

    ++c1;
    ++c2;
    ++c2;

    Counter c3 = c1 + c2;

    cout << c1.get_count() << endl;
    cout << c2.get_count() << endl;
    cout << c3.get_count() << endl;



    return 0;
}