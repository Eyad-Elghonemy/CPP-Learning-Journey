# include <iostream>
using namespace std;

void add(string a, float n2);

class Rectangle{

    private:

        float width;
        float length;

    public:

        Rectangle() : length(0), width(0) {};

        void setWidth(float w){
            width = w;
        }

        void setLength(float l){
            length = l;
        }

        float getLength(){
            return length;
        }

        float getWidth(){
            return width;
        }

        float getArea(){
            return length * width;
        }

};

class Distance{

    private:

        int feet;
        float inches;
        static int count; 
        

    public:

        // Distance(): feet(0), inches(0) {};

        Distance(int f=0, float i=0);
        
        ~Distance(){
            count--;
        }

        void set_feet(int f);
        void set_inches(float i);
        int get_feet();
        float get_inches();

        void display(){
            cout << "Feet => " << feet << ", Inches => " << inches << endl;
        }

        static Distance Add_distance(Distance d1, Distance d2){
            
            Distance temp;
            temp.feet = d1.feet + d2.feet;
            temp.inches = d1.inches + d2.inches;
            return temp;

        }

        Distance merge(Distance d2){
            Distance temp;
            temp.feet = feet + d2.feet;
            temp.inches = inches + d2.inches;
            return temp;
        }

        static float add_distance(int f1, int f2, float i1, float i2){
            return (f1 + f2 + i1 + i2);
        }

        static int get_counter(){
            return count;
        }



};

int Distance :: count = 0;

Distance :: Distance(int f, float i): feet(f), inches(i){count++;}

void Distance :: set_feet(int f) {
    feet = f;
}

void Distance :: set_inches(float i) {
    inches = i;
}

int Distance :: get_feet() {
    return feet;
}

float Distance :: get_inches() {
    return inches;
}


int fact(int n);

int main(){

    Rectangle  r1;

    Distance d1(5, 3.5);
    Distance d2;
    Distance d3(d1);
    Distance d4 = d2;
    
    // d1.display();
    // d2.display();
    // d3.display();
    // d4.display();

    // add("Number", 50.3);

    // Distance d5;
    // d5 = d5.Add_distance(d1, d3);
    // d5.display();

    // Distance d6 = d1.merge(d3);

    // d6.display();

    // cout << "COunter => " << Distance :: get_counter() << endl;

    // cout << Distance :: add_distance(50.3, 60.4, 66, 33) << endl; 

    // Distance d6 = Distance :: Add_distance(d1, d3);
    // d6.display();

    // cout << fact(5) << endl;

    double mat[3][3];

    for (int i = 0; i < 3; i++)
    { 
        for(int j = 0; j < 3; j++)
            cin >> mat[i][j];
        }


    for (int i = 0; i < 3; i++)
        {
        for(int j = 0; j < 3; j++)        
            cout << mat[i][j] << " ";
    
        cout << endl;
    }
        
        



    return 0;
}

void add(string a, float n2){
    cout << a << " " << n2 << endl;
}

int fact(int n){
    if (n == 1)
        return n;

    else
        return (n * fact(n - 1));
}