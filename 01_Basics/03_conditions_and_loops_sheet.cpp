#include <iostream>
#include <cmath>
#include <climits>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;


int main(){

    // float w_p, h_i;
    // cout << "Enter Your Weight In Pounds And Your Height In Inches : " << endl;
    // cin >> w_p >> h_i ;

    // const float p_to_kg = 0.45359237;
    // const float i_to_m = 0.0254; 

    // float w_kg = w_p * p_to_kg;
    // float h_m = h_i * i_to_m;

    // float BMI = w_kg / pow(h_m, 2);

    // if(BMI >= 30)
    //     cout << "Your BMI Is : " << BMI << " And Are Obese " << endl; 

    // else if (BMI >= 25)
    //     cout << "Your BMI Is : " << BMI << " And Are Overweight " << endl; 

    // else if (BMI >= 18.5)
    //     cout << "Your BMI Is : " << BMI << " And Are Normal " << endl;
        
    // else
    //     cout << "Your BMI Is : " << BMI << " And Are Underweight " << endl; 

    
    // int n1 = rand() % 10;
    // int n2 = rand() % 10;

    // if(n2>n1){
    //     int temp = n1;
    //     n1 = n2;
    //     n2 = temp;
    // }

    // int r;
    // cout << "What's Is The " << n1 << " - " << n2 << " ?" << endl;
    // cin >> r;

    // if(r == (n1-n2))
    //     cout << "Correct Answer\n";

    // else
    //     cout << "False Answer\n";

    // int y;

    // cout << "Enter The Year : " << endl;
    // cin >> y;

    // bool leap = ((y%4==0 && y%100 == 0)||y%400==0);
    
    // if(leap)
    //     cout << y << " Is A Leap Year\n";
    
    // else 
    //     cout << y << " Isn't A Leap Year\n";

    // int lott_num = rand() % 100;
    // int n1 = lott_num % 10;
    // int n2 = lott_num / 10;

    // int g_num;
    // cout << "Enter The Guess Number : " << endl;
    // cin >> g_num;

    // int g_n1 = g_num /10;
    // int g_n2 = g_num %10;

    // if(g_num == lott_num)
    //     cout << "Excatly Matches, You Win 10,000$\n";

    // else if(g_n1 == n2 && g_n2 == n1)
    //     cout << "All Digits Matched, You Win 3,000$\n";

    // else if(g_n1 == n1 || 
    //         g_n1 == n2 ||
    //         g_n2 == n1 ||
    //         g_n2 == n2)
        
    //     cout << "Match One Digit, You Win 1,000$\n";

    // else 
    //     cout << "No Digit Matched\n";


    // float d;
    // cout << "Enter Your Degree : " << endl;
    // cin >> d;

    // if(d>=0 && d<=100){
    //     if(d>=90)
    //         cout << "Your Degree is A" << endl;

    //     else if(d>=80)
    //         cout << "Your Degree is B" << endl;

    //     else if(d>=70)
    //         cout << "Your Degree is C" << endl;

    //     else if(d>=60)
    //         cout << "Your Degree is D" << endl;
    //     else 
    //         cout << "Your Degree is F" << endl;
    // }
    // else
    //         cout << "Invalid Number\n";

    // float a,b,c,r1, r2, rb, ri;

    // cout << "Enter The Coeficients (ax^2+bx+c) : " << endl;
    // cin >> a >> b >> c;

    // float d = b*b - 4*a*c;
    
    // if(d>0){
    //     cout << "There are Two Real Roots : \n";
    //     r1 = (-b + sqrt(b*b-4*a*c))/(2*a);
    //     r2 = (-b - sqrt(b*b-4*a*c))/(2*a);
    //     cout << "Root One : " << r1 << endl << "Root Two : " << r2 << endl;
    // }
    // else if(d==0){
    //     cout << "There's Only One Real Root\n";
    //     r1 = -b/(2*a);
    //     cout << "Root : " << r1 << endl;
    // }
    // else{
    //     cout << "There Are Two Complex Roots\n";
    //     rb = -b/(2*a);
    //     ri = sqrt(-d)/(2*a);
    //     cout << "Root One : " << rb << " + " << ri << " i" << endl;
    //     cout << "Root Two : " << rb << " - " << ri << " i" << endl; 
    // }

    // float n1, n2;
    // int op;

    // cout << "Menu : \n1. ADD\n2. Subtract\n3. Multiply\n4. Divide\nEnter Your Choice : " << endl;
    // cin >> op;
    // cout << "Enter The Two Numbers : " << endl;
    // cin >> n1 >> n2;

    // switch (op)
    // {
    // case 1:
    //     cout << "Output : " << n1 + n2 << endl;
    //     break;
    
    // case 2:
    //     cout << "Output : " << n1 - n2 << endl;
    //     break;

    // case 3:
    //     cout << "Output : " << n1 * n2 << endl;
    //     break;

    // case 4:
    //     if(n2==0)
    //         cout << "Can't Divide By Zero\n" << endl;
    //     else    
    //         cout << "Output : " << n1/n2 << endl;
    //     break;
    
    // default:
    //     cout << "Invalid Input\n";
    // }

    
    // char c = 'A';
    // char x = 'Z';

    // char z = 0XFF45;
    // cout << z;

    // char c;
    // cout << "Enter The Lowercase Letter : " << endl;
    // cin >> c;

    // char u = (c-'a') + 'A';
    // cout << "Upper Case Letter : " << u << endl;

    // char c;
    // cout << "Enter The Upper Case Letter : " << endl;
    // cin >> c;

    // char l = (c - 'A') + 'a';
    // cout << "LowerCase Letter : " << l << endl;

    // char c = 'a';
    // char b = 'b';
    // char d = (b - c) + 'A'; 

    // cout << d;

    // char c;
    // cout << "Enter Character : " << endl;
    // cin >> c;

    // if(c>='a' && c<= 'z')
    //     cout << c << " Is A Lowercase Letter\n";
    // else if(c>='A' && c<='Z')
    //     cout << c << " Is A Uppercase Letter\n";
    // else if (c>='0' && c<= '9')
    //     cout << c << " Is A Single-Digit Number\n";

    // else
    //     cout << c << " Is An Invalid Input\n";

    // int c = 0;

    // while(c<=100){
    //     cout << "Hi\n";
    //     c++;
    // }

    // int n1 = rand() %10;
    // int n2 = rand() %10;

    // if(n2 > n1){
    //     int temp = n1;
    //     n1 = n2;
    //     n2 = temp;
    // }

    // int ans;
    // cout << "What's The " << n1 <<  " - " << n2 << " ?" << endl;
    // cin >> ans;

    // while(ans != (n1-n2)){
    //     cout << "Wrong Answer !!\n";
    //     cout << "What's The " << n1 <<  " - " << n2 << " ?" << endl;
    //     cin >> ans;
    // }
    // cout << "Correct Answer !!\n";

    srand(time(0));

    // int n = rand() % 101;
    // int g;
    // int c = 5;
    // cout << "Enter Your Guess : " << endl;
    // cin >> g;

    // while(g != n && c != 0){

    //     // if(c == 0){
    //     //     cout << "Your Attempts ended" << endl;
    //     //     break;
    //     // }

    //     if(g>n){
    //         cout << "Wrong Answer, Your Guess Is Very High\n";
    //         c--;
    //         cout << "You Have : " << c << " Attempts Left\nTry Again : \n";
    //         cin >> g;

    //     }

    //     else if(g<n){
    //         cout << "Wrong Answer, Your Guess Is Very Low\n";
    //         c--;
    //         cout << "You Have : " << c << " Attempts Left\nTry Again : \n";
    //         cin >> g;
    //     }

    // }

    // if(c==0)
    //     cout << "Your Attempts ended. The correct number was: " << n << endl;
    
    // else
    //     cout << g << " Is A Correct Guess !!\n" << endl;


    // cout << "Multiplication Taple\n";
    // for (int i = 0; i<=9; i++)
    //     cout << setw(4) << i;
    
    // cout << endl;
    // cout << "-------------------------------------\n";
    // for(int j = 1; j<=9; j++){
    //     cout << j <<" |";
    //     for(int k = 1; k<=9; k++)
    //         cout << setw(4) << k*j;
    //     cout << endl;
    // }

    // int n;
    // int f = 1;
    // cout << "Enter The Number : " << endl;
    // cin >> n;
    // for(int i = n; i>=1; i--)
    //     f*=i;
    
    //     cout << "Factorial : " << f << endl;

    // int n, c;
    // cout << "Enter The Number : " << endl;
    // cin >> n;
    // int x = abs(n);
    // c = 0;
    // do{
    //     x/=10;
    //     c++;
    // }while(x != 0);

    // cout << n << " Is A " << c << " Digits\n";

    // int n, c, sum;
    // cout << "Enter The Number : " << endl;
    // cin >> n;
    // int x = abs(n);
    // sum = 0;

    // do{ 
    //     c = x % 10;
    //     x /= 10;
    //     sum += c;

    // }while(x != 0);

    // cout << n << " Sum Of It's Digits : " << sum << endl;

    // int n, m, p;
        
    // cout << "Enter The Number : " << endl;
    // cin >> n;
    // m = n;
    // p = n;

    // for(int i = 0; i<9; i++){
    //     cout << "Enter The Number : " << endl;
    //     cin >> n;

    //     if(m<n)
    //         m = n;

    //     if(p>n)
    //         p = n;
        
    // }

    // cout << "Max : " << m << endl;
    // cout << "Min : " << p << endl;

    // double sum = 0;

    // for(double i =1; i<=1001; i+=2)
    //     sum += 1/i;

    // for(double j =2; j<=1001; j+=2)
    //     sum -= 1/j;
    

    // cout << "Sum : " << sum << endl;

    

    return 0;
}