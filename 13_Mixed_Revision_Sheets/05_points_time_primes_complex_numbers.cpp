# include <iostream>
# include <cmath>
using namespace std;

struct point {
    float x, y;
};

class Student{
    private:
        string name;
        static int count;

    public:
        Student(): name("Unknown"){count++;}
        Student(string n)
        {
            name = n;
            count++;
        }

        static int getCount(){
            return count;
        }
};

class Time{
    private:
        int h;
        int m;
        int s;
        
    public:
        
        Time(){
            h=0;
            m=0;
            s=0;
        }

        
        Time(int x, int y, int z){
            h=x;
            m=y;
            s=z;
        }

        void display(){
            cout << h << ":" << m << ":" << s << endl;
        }

        void add(Time t1, Time t2){

            s = t1.s + t2.s;
            m = t1.m + t2.m + (s/60);
            s %= 60;
            h = t1.h + t2.h + (m/60);
            m %= 60;
        }
};

int Student :: count = 0;



point midpoint(point p1, point p2);
int fact(int n);
int sum(int n, float &c);
void findprime(int x, int y);
bool isPrime(int n);
float distance(float x1, float y1, float x2, float y2);
void complex(float r1, float j1,float r2, float j2, char op);


int main(){

    // point p1 = {3, 4};
    // point p2 = {6, 7};

    // point p3 = midpoint(p1, p2);
    // cout << "MidPoint\nX: " << p3.x << "\nY: " << p3.y << endl;

    // Student s1;
    // Student s2;
    // Student s3;

    // cout << "Count: " << Student :: getCount() << endl;

    // ---------------------------------------------------------------

    // int n;
    // cout << "Enter The Number : " << endl;
    // cin >> n;

    // float c = 0;   

    // int s = sum(n, c);
    // int f = fact(n);

    // cout << "Sum : " << s << endl;
    // cout << "Factorial : " << f << endl;

    // if(c==0)
    //     cout << "No average\n";
    // else    
    //     cout << "Average : " << s/c << endl;

    // int x, y, z, k, l, m;
    // cin >> x >> y >> z;
    // cin >> k >> l >> m;

    // Time t1(x, y, z);
    // Time t2(k, l, m);

    // Time t3;
    // t3.add(t1, t2);
    
    // t1.display();
    // t2.display();
    // t3.display();

    // int x, y, size;
    // cout << "Enter The Range : " << endl;
    // cin >> x >> y;

    // findprime(x, y);

    // float x1, y1, x2, y2;
    // cout << "Enter The First Point : " << endl;
    // cin >> x1 >> y1;
    // cout << "Enter The Second Point : " << endl;
    // cin >> x2 >> y2;

    // float d = distance(x1, y1, x2, y2);
    // cout << "Distance = " << d << endl;

    float r1, j1, r2, j2;
    char op;
    cin >> r1 >> j1;
    cin >> r2 >> j2;
    cin >> op;
    complex(r1, j1, r2, j2, op);

    return 0;
}

point midpoint(point p1, point p2){
    point res;
    res.x = (p1.x + p2.x) / 2.0;
    res.y = (p1.y + p2.y) / 2.0;
    return res;
}

int sum(int n, float &c){
    int s = 0;
    for(int i = 0; i<=n; i++){
        if(i%5==0){
            s += i;
            c++;
        }   
    }
    return s;
}

int fact(int n){
    int f = 1;
    for(int i = n; i>=1; i--)
        f *= i;

    return f;
}

void findprime(int x, int y){
    for(int i = x; i<=y; i++){
        if(i!=0 || i!=1){
            if(isPrime(i))
                cout << i << " "; 
        }
    }
    cout << endl;
}

bool isPrime(int n){

    for(int i = 2; i<n; i++){
        if(n%i==0)
            return false;
    }
    return true;
}

float distance(float x1, float y1, float x2, float y2){
    return (sqrt(pow((x2-x1),2) + pow((y2-y1),2)));
}

void complex(float r1, float j1,float r2, float j2, char op){
    switch(op){
        case '+' : cout << "(" << r1 << "+" << j1 << "i) + (" << r2 << "+" << j2 << "i) = (" << r1 + r2 << "+" << j1 + j2 << "i)" << endl;
        break;
        case '-' : cout << "(" << r1 << "+" << j1 << "i) - (" << r2 << "+" << j2 << "i) = (" << r1 - r2 << "+" << j1 - j2 << "i)" << endl;
        break;
        case '*' : cout << "(" << r1 << "+" << j1 << "i) * (" << r2 << "+" << j2 << "i) = (" << r1 * r2 << "+" << j1 * j2 << "i)" << endl;
        break;
        default:   cout << "Error, Invalid Operator\n";
    }
}