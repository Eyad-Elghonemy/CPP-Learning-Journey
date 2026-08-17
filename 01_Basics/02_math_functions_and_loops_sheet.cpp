#include <iostream>
#include <cmath>
#include <climits>

using namespace std;


int main(){

    // cout << sin(M_PI) << endl;
    // cout << cos(M_PI) << endl;
    // cout << tan(M_PI) << endl;
    
    // cout << asin(.5) << endl;
    // cout << acos(-1) << endl;
    // cout << atan(.3333) << endl;

    // cout << exp(1) << endl;
    // cout << log(M_E) << endl;
    // cout << log10(M_E) << endl;

    // cout << pow(5,2) << endl;
    // cout << sqrt(4) << endl;

    // cout << ceil(3.1) << endl;
    // cout << floor(3.999) << endl;

    // cout << min(2,min(3,5)) << endl;
    // cout << max(2,max(3,5)) << endl;
    // cout << abs(-50) << endl;

    // cout << "*******************************************\n";
    
    // /*Sheet 1 Computer Language*/

    // cout << 3.5*4/2-2.5 << endl;

    // int l, s, rows;
    // rows = 5;

    // for(l=1; l<=rows; l++){
    //     for(s=1; s<=rows+l-1; s++){
    //         if(s<=rows-l)
    //             cout << " ";
    //         else
    //             cout << "*";
    //     }
    //     cout << endl;
    // }

    //     cout << "*******************************************\n\n";


    // int x, y, Rows;
    // Rows = 5;

    // for(x=Rows; x>=1; x--){
    //     for(y=1; y<=Rows+x-1; y++){
    //         if(y<=Rows-x)
    //             cout << " ";
    //         else
    //             cout << "*";
    //     }
    //     cout << endl;
    // }

    //     cout << "*******************************************\n\n";

    //     cout << "p\tp*5\tp*10\n";
    //     for(float i =5;i<=50;i*=2){
    //         cout << i << "\t" << i*5 << "\t" << i*10 << endl;
    //         if(i==10)
    //             i=12.5;
    //     }

    //     cout << "*******************************************\n\n";

    //     float r = 5;
    //     cout << "Area Of Circle : " << M_PI *r*r << endl;

    //     cout << "*******************************************\n\n";

    //     float t1, t2, t3, avg;

    //     cout << "Enter The Three Numbers : " << endl;

    //     // cin >> t1 >> t2 >> t3;

    //     avg = (t1 + t2 + t3)/3.0;

    //     cout << "Average Of " << t1 << " ," << t2 << " and " << t3 << " Is : " << avg << endl;

    //     cout << "*******************************************\n\n";

    //     // short v = 32767 + 1;
    //     // short V = -32768 - 1;

    //     INT_MAX;
    //     INT_MIN;
    //     LONG_MAX;
    //     LONG_MIN;
    //     cout << sizeof(char) << endl;

    //     int S;
    //     cout << "Enter The Number Of Seconds : " << endl;
    //     // cin >> S;
    //     int M = S / 60;
    //     int rem_sec = S % 60;

    //     cout << S << " Seconds Is : " << M << " Mins, ANd " << rem_sec << " Seconds\n";

    //     cout << "*******************************************\n\n";

    //     float C, F;
    //     cout << "Enter Fahrenheit Degree : " << endl;
    //     // cin >> F;
    //     C = (5.0/9.0)*(F-32);

    //     cout << F << " Fahrenheit Is : " << C << " Celsuis\n";

    //     cout << "*******************************************\n\n";

    //     cout << static_cast<int>(1.9) << endl;
    //     cout << static_cast<double>(1)/2 << endl;

    //     double p_a;
    //     // cout << "Enter The Purchase Amount : " << endl;
    //     cin >> p_a;
    //     double s_t = p_a * .06;

    //     cout << "Sales Tax Is : " << static_cast<int>(s_t*100)/100.0 << endl;

    //     cout << "*******************************************\n\n";

    //     float X1, Y1, X2, Y2;
    //     cout << "Enter First Point Points Coordinate : " << endl;
    //     cin >> X1 >> Y1;
    //     cout << "Enter Second Point Points Coordinate : " << endl;
    //     cin >> X2 >> Y2;

    //     float X_d = pow((X2-X1), 2);
    //     float Y_d = pow((Y2-Y1), 2);

    //     float D = sqrt(X_d + Y_d);

    //     cout << "Distance Between " << "(" << X1 <<"," << Y1 <<  "), And (" << X2 << "," << Y2 << ")" << " IS : " << D << " Units\n";

        cout << "*******************************************\n\n";

        int n;
        cout << "Enter The Number : " << endl;
        cin >> n;

        if(n%5==0)
            cout << "Hi Five \n";
        if(n%2==0)
            cout << "Hi Even\n";


        
    return 0;
}