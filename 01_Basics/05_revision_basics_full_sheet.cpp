# include <iostream>
# include <cmath>
# include <climits>
# include <iomanip>
# include <cstdlib>
# include <ctime>

using namespace std;

// int sum(int , int );
int Max(int , int );
void grade(float );
void Swap(int &n1, int &n2);
void inc(int &);


float pi = 3.1415;
static int c = 0;


int main(){

    // cout << "Celsuis 35 is : " << endl;
    // cout << (9/5.0) * 35 + 32  << " F"  << endl;

    // cout << exp(5);

    // cout << asin(.5) * (180/M_PI);
    const double pi = 3.14159;
    const double e = 2.71828;

    M_E, M_PI ;

    // cout << log(exp(1)); 
    // cout << pow(2,5) << endl;

    // cout << sqrt(4) << endl;

    // cout << ceil(2.1) << endl;
    // cout << floor(2.999) << endl;

    // cout << min(5, min(4, 14)) << endl;
    // cout << max(5, max(4, 14)) << endl;


    // cout << abs(-15) << endl;
    // cout << "My Name Is : \n'Eyad' \nMy Address Is : \"Menofia\\Mitberah\\Egypt\"\t";

    // Sheet 1

/*
          *
         ***
        *****
       *******
*/

    // int l, s, rows;
    // rows = 4;

    // for(l=1; l<=rows; l++){
    //     for(s = 1; s<= rows+l-1; s++){
    //         if(s<=rows-l)
    //             cout << " ";
    //         else
    //             cout << '*';
    //     }
    //     cout << endl;
    // }

/*
       *******
        *****
         ***
          *
*/


    // int s, l , rows;

    // rows = 4;

    // for(l=rows; l>= 1; l--){
    //     for(s=1; s<=rows+l-1; s++){
    //         if(s<=rows-l)
    //             cout << " ";

    //         else 
    //             cout << '*';
    //     }
    //     cout << endl;
    // }

    // cout << "p\tp*5\tp*10" << endl;

    // for(float i = 5; i<=50 ; i*=2){
        
    //     cout << (i) << "\t" << (i*5) << "\t" << (i*10) << endl;
        
    //     if(i==10)
    //         i=12.5;
    // }

    // cout << ((1.2*0.1 + 3.3*0.3)) / (0.09+.001) << endl;
    // cout << sqrt(6 *(1+ + 0.25 + (1.0/9.0) + (1.0/16.0) + (1.0/29.0)));


    // double r, a;

    // cout << "Enter Raduis Of Circle : " << endl;
    // cin >> r;
    // a = M_PI * r * r;
    // cout << "Area Of Circle : " << a << endl;

    // double x, y , z;
    // cin >> x >> y >> z;

    // double avg = (x+y+z) / 3;
    // cout << "Average : " << avg << endl;

    
    // int i=1;
    // int i(1);

    // int i=5, j=8;

    // return 0;

    // short v = -32768 - 1;
    // cout << v << endl;

    // int n1 = 1, n2;


    // cout << INT_MAX << endl;
    
    // cout << INT_MAX << endl;
    // cout << INT_MIN << endl;

    // cout << LONG_MAX << endl;
    // cout << LONG_MIN << endl;

    // cout << __FLT_MAX__ << endl;
    // cout << __FLT_MIN__ << endl;

    // cout << __DBL_MAX__ << endl;
    // cout << __DBL_MIN__ << endl;

    // cout << sizeof(double) << endl;

    // cout << 17%3 << endl;
    
    // int s, m, rem_sec;

    // cout << "Enter The Number Of Seconds : " << endl;
    // cin >> s;
    
    // m = s / 60;
    // rem_sec = s % 60;

    // cout << s << " Seconds , Is : " << m << " Minutes, And Remaining Seconds Is : " << rem_sec << endl; 

    // float c, f;
    // cout << "Enter Degree In Fahrenheit : " << endl;
    // cin >> f;

    // c = (5.0/9) * (f-32);

    // cout << f << " Fahrenheit , Is A : " << c << " Celesuis\n";

    // X += 1  --> x = x + 1
    // X -= 1  --> x = x - 1 
    // X *= 5  --> x = x * 5 
    // X /= 3  --> x = x / 3 
    // X %= 1  --> x = x % 3 

    // float x = 1.1;
    // float y = 5.4;
    // float z = x-- + (++y);

    // cout << x++ << endl;
    // cout << ++x << endl;
    // cout << z << endl;


    // float i = 34.7;
    // cout << i << endl;
    // cout << static_cast<int>(3.666666) << endl;

    // cout << static_cast<int>(3.666666 * 100)/100.0 << endl;

    // float i = (int)5.4;

    // cout << i << endl;

    // float sales_tax , purchase_amount;
    // cout << "Enter Purchase Amount : " << endl;
    // cin >> purchase_amount;

    // sales_tax = purchase_amount * .06;

    // cout << "Sales Tax Is : " << static_cast<int>(sales_tax*100)/100.0 << endl;

    // float ann_in_ra, lo_amo, no_of_years;

    // cout << "Enter The Annualy Interest Rate : " << endl;
    // cin >> ann_in_ra;

    // cout << "Enter The Loan Amount : " << endl;
    // cin >> lo_amo;

    // cout << "Enter The Number Of Years : " << endl;
    // cin >> no_of_years;

    // float mon_in_ra = ann_in_ra / 1200.0;

    // float mon_pa = (lo_amo * mon_in_ra) / (1-1/pow((1+mon_in_ra), no_of_years*12));

    // float tot_pa = mon_pa * no_of_years * 12;

    // cout << "The Monthly Payment Is : " << static_cast<int>(mon_pa*100)/100.0 << endl;
    // cout << "The Total Payment Is : " << static_cast<int>(tot_pa*100)/100.0<< endl; 

    // double x1, x2, y1, y2;

    // cout << "Enter Locus Of First Point : " << endl;
    // cin >> x1 >> y1;

    // cout << "Enter Locus Of Second Point : " << endl;
    // cin >> x2 >> y2;

    // double sub_x = pow((x2-x1), 2);
    // double sub_y = pow((y2-y1), 2);

    // double distance = sqrt(sub_x + sub_y); 

    // cout << "Distance Between (" << x1 << "," << y1 << ")" << ", And (" << x2 << "," << y2 << ")"  << ", Is : " << distance << endl;

    // int n;
    // cout << "Enter Number : " << endl;
    // cin >> n;

    // if(n%5==0){
    //     cout << "Hi Five\n";
    // }   

    // bool even = n%2==0;

    // if(even)
    //     cout << "Hi Even\n";

    // if(int c=3) { 
    //     cout << "Hi" << endl;
    // }

    // double x = 1- 0.1 - 0.1 - 0.1 - 0.1 - 0.1;

    // if(x==0.5)
    //     cout << "X Is 0.5" << endl;
    // else    
    //     cout << "X Isn't 0.5" << endl;

    // const double ep = 1E-14;

    // if(abs(x-0.5) < ep)
    //     cout << "X is Approximately 0.5\n";

    // int amount = 40;
    // if(!amount <= 50)
    //     cout << "Amount More than 50\n";

    // float w_p, h_in;
    // cout << "Enter Weight In Pounds, And Height In inches : " << endl;
    // cin >> w_p >> h_in;

    // const float p_to_kg = 0.45359237;
    // const float in_to_me = 0.0254;

    // float w_kg = p_to_kg * w_p;
    // float h_me = h_in * in_to_me;

    // if(h_me==0)
    //     cout << "Error Invalid Input\n";

    // float BMI = w_kg / (h_me * h_me);

    // if(BMI>=30)
    //     cout << "Your BMI Is : " << static_cast<int>(BMI*100)/100.0 << ", And Your Condition Is : Obese\n";

    // else if(BMI>=25)
    //     cout << "Your BMI Is : " << static_cast<int>(BMI*100)/100.0 << ", And Your Condition Is : Overweight\n";
            
    // else if(BMI>=18.5)
    //     cout << "Your BMI Is : " << static_cast<int>(BMI*100)/100.0 << ", And Your Condition Is : Normal\n";

    // else
    //     cout << "Your BMI Is : " << static_cast<int>(BMI*100)/100.0 << ", And Your Condition Is : Underweight\n";

    
    // srand(time(0));
    // int n1 = rand() % 10;
    // int n2 = rand() % 10;

    // if(n2 > n1){
    //     int temp = n1;
    //     n1 = n2;
    //     n2 = temp;
    // }
    // int ans;

    // cout << "What's " << n1 << " - " << n2 << " ?\n";
    // cin >> ans;

    // if(ans == (n1-n2))
    //     cout << "Correct!!" << endl;

    // else
    //     cout << "False Answer\n";

    // int y;
    // cout << "Enter The Year : " << endl;
    // cin >> y;

    // bool leap = ((y%4==0 && y%100 != 0) || y%400==0);

    // if(leap)
    //     cout << y << " Is a Leap Year\n";
    // else
    //     cout << y << " Isn't A Leap Year\n";

    // srand(time(0));

    // int lott_num = rand() % 100 ;
    // int l1 = lott_num /10;
    // int l2 = lott_num % 10;

    // int guss_num;
    // cout << "Enter Two Digits Guess Number : " << endl;
    // cin >> guss_num;

    // int g1 = guss_num /10;
    // int g2 = guss_num %10;

    // cout << lott_num << " Is A Lottary Number, And Your Guess Is : " << guss_num << endl;
    // if(guss_num == lott_num)
    //     cout << "Exactly Matches, You Won 10,000$\n";

    // else if((g1 == l2)&&(g2 == l1))
    //     cout << "All Digits Matches, You Won 3,000$\n";

    // else if ((g1 == l1) ||
    //          (g1 == l2) ||
    //          (g2 == l1) ||
    //          (g2 == l2))
    //     cout << "One Digit Matches, You Won 1,000$\n";
        
    // else 
    //     cout << "No Digit Matches\n";

    // cout << fixed << setprecision(2);

    // float n1, n2;
    // char op;

    // cout << "Enter First Number : " << endl;
    // cin >> n1;
    // cout << "Enter Operation (+,-,*,/) : " << endl;
    // cin >> op;
    // cout << "Enter Second Number : " << endl;
    // cin >> n2;

    // switch(op){

    //     case '+' : cout << n1 << " + " << n2 << " = " << n1 + n2 << endl;
    //     break;
    //     case '-' : cout << n1 << " - " << n2 << " = " << n1 - n2 << endl;
    //     break;
    //     case '*' : cout << n1 << " * " << n2 << " = " << n1 * n2 << endl;
    //     break;
    //     case '/' : 
    //                 if(n2==0)
    //                     cout << "Error, Can't Divide By Zero\n";
    //                 else
    //                     cout << n1 << " / " << n2 << " = " << n1 / n2 << endl;
    //     break;

    //     default : cout << "Wrong Operation Choosen\n";
    // }

    // int d;
    // cout << "Enter Day : " << endl;
    // cin >> d;

    // switch(d){
    //     case 1 :
    //     case 2 : 
    //     case 3 : 
    //     case 4 : 
    //     case 5 : cout << "Week Day\n";
    //     break;
    //     case 6 :
    //     case 0 : cout << "Weekend\n";
    //     break;

    //     default : cout << "Invalid Day\n";
    // }

    // int y;
    // cout << "Enter Year : " << endl;
    // cin >> y;

    // int chinese_z_s =  y % 12;

    // cout << "Your Zodiac Sign Is : ";

    // switch (chinese_z_s)
    // {
    
    // case 0 : cout << "Monkey\n";
    // break;

    // case 1 : cout << "rooster\n";
    // break;
    // case 2 : cout << "Dog\n";
    // break;
    // case 3 : cout << "Pig\n";
    // break;
    // case 4 : cout << "Rat\n";
    // break;
    // case 5 : cout << "OX\n";
    // break;
    // case 6 : cout << "Tiger\n";
    // break;
    // case 7 : cout << "Rappit\n";
    // break;
    // case 8 : cout << "Dragon\n";
    // break;
    // case 9 : cout << "Snake\n";
    // break;
    // case 10 : cout << "Horse\n";
    // break;
    // case 11 : cout << "Sheep\n";
    // break;

    
    // default: cout << "Invalid Input\n";
    //     break;
    // }

    // int n1, n2;

    // cin >> n1 >> n2;

    // (n1>n2)? cout << "Yes" : cout << "No";

    // float d;
    // cout << "Enter Your Degree : " << endl;
    // cin >> d;

    // if(d>=0 && d<=100){
    //     if(d>=90)
    //         cout << "Your Grade Is : A" << endl;

    //     else if(d>=80)
    //         cout << "Your Grade Is : B" << endl;

    //     else if(d>=70)
    //         cout << "Your Grade Is : C" << endl;

    //     else if(d>=60)
    //         cout << "Your Grade Is : D" << endl;

    //     else 
    //         cout << "Your Grade Is : F" << endl;

    // }

    // else 
    //     cout << "Error, Invalid Input\n";

    // cout << fixed << setprecision(2);

    // float a, b, c;
    // cout << "Enter Quadric Equation (ax^2+bx+c=0) : " << endl;
    // cin >> a >> b >> c;

    // float delt = (b*b) - (4*a*c);
    // if(delt>0){
    //     float r1 = (-b + sqrt(delt))/(2*a);
    //     float r2 = (-b - sqrt(delt))/(2*a);

    //     cout << "There Are Two Real Roots\n";
    //     cout << "R1 = " << r1 << "\nR2 = " << r2 << endl;

    // }
    // else if (delt==0){
    //     float r1 = -b/(2*a);

    //     cout << "There Are One Real Root\n";
    //     cout << "R = " << r1 << endl;

    // }

    // else{

    //     float ri = sqrt(-delt);
    //     float rr = -b/(2*a);

    //     cout << "There Are Two Real Roots\n";
    //     cout << "R1 = " << rr << " + " << ri << "J" << endl;
    //     cout << "R2 = " << rr << " - " << ri << "J" << endl;

    // }

    // char c = 'a';
    // cout << ++c;

    // char c = 0XFF41;
    // cout << c;

    // char c = 65;
    // cout << c;

    // int i = 'A';
    // cout << i;

    // int i = '2' + '3';
    // cout << i;

    // int j = 'a' + 3;
    // cout << j;
    // cout << static_cast<char>(j);

//    char l;
//    cout << "Enter LowerCase : " << endl;
//    cin >> l;
   
//    char u = (l - 'a') + 'A';
//    cout << l << " ==> " << u << endl;

    // char c;
    // cout << "Enter Character : " << endl;
    // cin >> c;

    // if(c<='z' && c>='a')
    //     cout << c << " ==> LowerCase\n";

    // else if(c<='Z' && c>='A')
    //     cout << c << " ==> UpperCase\n";

    // else if(c<='9' && c>='0')
    //     cout << c << " ==> Is A Digit\n";

    // else 

    //     cout << "Invalid Input\n";

    // srand(time(0));

    // int n1 = rand()%10;
    // int n2 = rand()%10;

    // if(n2>n1){
    //     int temp = n1;
    //     n1=n2;
    //     n2 = temp;
    // }

    // int ans;
    // cout << "What's " << n1 << " - " << n2 << " ?" << endl;
    // cin >> ans;

    // while(ans!=(n1-n2)){

    //     cout << "Wrong Answer, Try Again\n";
    //     cout << "What's " << n1 << " - " << n2 << " ?" << endl;
    //     cin >> ans;

    // }

    // cout << "Correct Answer!!\n";

    // srand(time(0));

    // int g = rand()%101;

    // int u;
    // cout << "Enter Your Guess : " << endl;
    // cin >> u;

    // while(u!=g){
    //     if(u>g)
    //     {
    //         cout << "Your Guess Is Too High, Try Again\n";
    //         cin >> u;
    //     }
    //     else
    //     {
    //         cout << "Your Guess Is Too Low, Try Again\n";
    //         cin >> u;
    //     } 
    // }
    
    // cout << "Correct Answer!!\n";
    

    // int sum = 0;
    // int n;

    // do{
    //     cout << "Enter The Number : (0 Ends Loop)" << endl;
    //     cin >> n;
    //     sum += n;

    // }while(n!=0);

    // cout << "Summation : " << sum << endl;

    // cout << "Multiplication Taple\n";
    // for(int i = 1; i<=9; i++)
    //     cout << setw(4) << i;

    // cout << endl;

    // cout << "-----------------------------------------\n";

    // for(int j=1; j<=9; j++){
    //     cout << j << "|";
    //     for(int k = 1; k<=9 ; k++)
    //         cout << setw(4) << k*j;

    //     cout << endl;
    // }

    // int sum = 0;
    // int n;

    // do{
    //     cin >> n;
    //     sum += n;
    // }while(n!=0);

    // cout << "Sum = " << sum << endl;
    // cout << "Last Number = " << n << endl;

    // int sum = 0;

    // for(int i =0; i<1000; i++)
    //     sum += i;

    // cout << "Sum => " << sum << endl;

    // int n, f;
    // f = 1;

    // cout << "Enter The Number : " << endl;
    // cin >> n;

    // for(int i = n; i>=1; i--)
    //     f *= i;

    // cout << "Factorial = " << f << endl;

    // int n;
    // cout << "Enter The number : " << endl;
    // cin >> n;

    // int x = abs(n);
    // int s = 0;

    // do{
    //     x/=10;
    //     s++;
    // }while(x!=0);

    // cout << n << " Is A => " << s << " Digits\n";

    // int n, j;
    // cout << "Enter The number : " << endl;
    // cin >> n;

    // int x = abs(n);
    // int c = 0;
    // int s = 0;

    // do{
    //     j = x%10;
    //     x /= 10;
    //     s += j;
    //     c++;
    // }while(x!=0);

    // cout << n << " Is A => " << c << " Digits, And Sum Of It's Digits => " << s << endl;

    // int n;
    // cout << "Enter Numbers To Find Max And Min : " << endl;
    // cin >> n;

    // int mx = n;
    // int mn = n;

    // for(int i = 1; i<10; i++){
    //     cout << "Enter Numbers To Find Max And Min : " << endl;
    //     cin >> n;
    //     if(n>mx)
    //         mx = n;
    //     if(n<mn)
    //         mn = n;
    // }

    // cout << "Max => " << mx << endl;
    // cout << "Min => " << mn  << endl;

    // int n;
    // cout << "Enter The Number: " << endl;
    // cin >> n;

    // int s_even = 0;
    // int s_odd = 0; 


    // for(int i = n; i>=1 ; i--){
    //     if(i%2==0)
    //         s_even += i;
    //     else    
    //         s_odd += i;
    // }

    // cout << "Sum Of Even Numbers : " << s_even << endl;
    // cout << "Sum Of Odd Numbers : " << s_odd << endl;

    // double sum = 0;
    // int i = 1;

    // // for(int i = 1; i<=1001; i+=2)
    // //     sum += 1.0/i; 

    // // for(int j = 2; j<= 1001; j+=2)
    // //     sum -= 1.0/j;

    // double term;

    // do{

    //     term = 1.0/i;
    //     if(i%2==0)
    //         sum -= term;
    //     else 
    //         sum += term;

    //     i++;
    // }while(term>0.0001);

    // cout << "Sum Of Series Is : " << sum << endl;

    // int n1, n2;
    // cout << "Enter Two Numbers : " << endl;
    // cin >> n1 >> n2;
    // int s = sum(n1, n2);

    // cout << "Summation : " << s << endl;

    // int x, y;
    // cout << "Enter Two Numbers : " << endl;
    // cin >> x >> y;

    // cout << "Max => " << Max(x, y) << endl;

//     float g;
//     cout << "Enter Grade : " << endl;
//     cin >> g;

//     grade(g);

//     cout << "Number Of Invokes : " << c << endl;


    // int x;
    // cin >> x;

    // inc(x);

    // cout << "X After Increment => " << x << endl;

    // int x, y;
    // cin >> x >> y;
    // Swap(x, y);
    // cout << "x After Swap => " << x << endl;
    // cout << "y After Swap => " << y << endl;

    




    return 0;
}

// void Swap(int &n1, int &n2){
//     int temp = n1;
//     n1 = n2;
//     n2 = temp;
// }

// void inc(int &n){
//     n++;
// }

// void grade(float g){
//     c+=1;

//     if(g>=0 && g<=100){
//         if(g>=90)
//             cout << "A\n";
//         else if(g>=80)
//             cout << "B\n";
//         else if(g>=70)
//             cout << "C\n";
//         else if(g>=60)
//             cout << "D\n";
//         else
//             cout << "F\n";
//     }
//     else    
//         cout << "Error, Invalid Input\n";
// }

// int Max(int n1, int n2){

//     if(n1 > n2)
//         return n1;
//     else    
//         return n2;

// }

// int sum(int n1, int n2){
//     int sum = 0;
//     sum = n1 + n2;
//     return sum;
// }