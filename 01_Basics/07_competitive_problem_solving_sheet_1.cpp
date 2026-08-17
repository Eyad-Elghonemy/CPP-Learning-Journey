#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){    

    long long A, B, C;

    cin >> A >> B >> C;

    long long X = max(max(A, B), C);

    long long Y = min (min(A, B), C);

    long long Z = (A+B+C)- (X+Y);

    cout << Y << " " << Z << " " << X << '\n';



    // long long n;

    // cin >> n ;

    // if(n>=13)
    //     cout << "YES" << '\n';

    // else
    //     cout << "NO" << '\n';


    // long long t;
    // long long n, k;

    // cin >> t;

    // while(t--){
    //     cin >> n >> k;

    //     // long long sum = 0;

    //     if(n%2==k%2 && k*k <= n)
    //         cout << "YES" << '\n';
        
    //     else    
    //         cout << "NO" << '\n';
    // }

    // long long K, r;

    // long long c = 1;

    // cin >> K >> r;

    // while ((K*c)%10 != r && (K*c)%10 != 0){
    //     c++;
    // }

    // cout << c << '\n';



    // long long t, n;
    
    // cin >> t;

    // while(t--){

    //     cin >> n;

    //     long long sum = n * (n + 1)/2;

    //     long long sumof2 = 0;

    //     for(long long i = 1; i<=n; i += i)
    //         sumof2 += i;

        
    //     cout << sum - 2 * sumof2 << '\n'; 

    // }

    // long long V, A, B, C;

    // cin >> V >> A >> B >> C;

    // while(V>=0){

    // V -= A;

    // if(V<0){
    //     cout << 'F' << '\n';
    //     break;
    // }
    
    // V-= B;

    // if(V<0){
    //     cout << 'M' << '\n';
    //     break;
    // }
    
    // V -= C;
    
    // if(V<0){
    //     cout << 'T' << '\n';
    //     break;
    // }
    
    // }

    // long long n;
    // cin >> n;

    // if(n%2==0)

    //     cout << n/2.0 << '\n';

    // else    

    //     cout << -((n+1)/2.0) << '\n';

    // cout << fixed << setprecision(1);

    // double A, B, C;

    // cin >> A >> B >> C;

    // double avg = ((A*2) + (B*3) + (C*5))/(2+3+5);

    // cout << "MEDIA = " << avg << '\n';


    // int t ,a, b, c;
    // cin >> t;

    // while(t--){
    //     cin >> a >> b >> c;

    //     int x = max(max(a, b), c);
    //     int y = min(min(a, b), c);
    //     int z = (a+b+c)- x -y;

    //     if((y+z)==x)
    //         cout << "YES" << '\n';
    //     else
    //         cout << "NO" << '\n';

    // }


    // int n, x, y, z, c;
    // c = 0;
    // cin >> n;

    // for(int i = 1; i<=n; i++){
         
    //     cin >> x >> y >> z;

    //     if((x+y+z)>1)
    //         c++;
        
    // }

    // cout << c << '\n';



    // char S;
    // cin >> S;
    // int t;
    // cin >> t;

    // for(int i = 0; i<t ; ++i){
    //     int x;
    //     cin >> x;
    //     for(int i = 0; i<x; ++i)
    //         cout << S;
    //     cout << '\n';

    // }


    //PROP13
    // long long N;
    // cin >> N;

    // long long sum = N*(N+1)/2;

    // cout << sum << '\n';



    //PROP 12
    // long long N;
    // cin >> N;

    // for(int i = 1; i<=10; i++)
    //     cout << i << " x "  << N  << " = " << i*N << '\n';

    // PROP 11
    // long long a, b, c, o;
    // o = 0;
    // cin >> a >> b >> c;

    // long long l = max(max(a,b), c);
    // long long k = min(min(a, b), c);
    // long long h = (a+b+c)-l-k;

    // while((k+h)<=l){
    //     h +=1;
    //     o+=1;
    // }

    // cout << o << '\n';

    // PROP 11
    // long long M, N;

    // cin >> M >> N;

    // int a = M * N;

    // cout << a/2 << '\n';

    // PROP 10
    // long long t, r;

    // cin >> t;

    // while(t--){

    //     cin >> r;

    //     if(r>=1900)
    //         cout << "Division 1" << '\n';

    //     else if(r>=1600)
    //         cout << "Division 2" << '\n';

    //     else if(r>=1400)
    //         cout << "Division 3" << '\n';

    //     else 
    //         cout << "Division 4" << '\n';

    // }


    // PROP 9
    // long long l1, r1, l2, r2;

    // cin >> l1 >> r1 >> l2 >> r2;

    // if((l2<=r1) && (l1<=r2))

    //     cout << l2 << " " << r1 <<'\n';
    // else
    //     cout << -1 <<'\n';


    // PROP 8
    // long long N, M;

    // cin >> N >> M;

    // long long X = N%10;

    // long long Y = M%10;

    // long long sum = X + Y;

    // cout << sum << '\n';

    // PROP 7
    // long long A, B, C, D;

    // cin >> A >> B >> C >> D;

    // long long DIFERENCA = (A*B) - (C*D);

    // cout << "DIFERENCA = " << DIFERENCA << '\n';

    // int A, B, C;
    // cin >> A >> B >> C;

    // int sum1 = A + B;
    // int sum2 = A + C;
    // int sum3 = B + C;

    // int maxSum = max(max(sum1, sum2), sum3);

    // cout << maxSum << endl;


    // cout << fixed << setprecision(4);

    // const double pi = 3.14159;

    // double R;
    // cin >> R;

    // double A = pi * R * R;

    // cout << "A=" << A << '\n';

    return 0;
}