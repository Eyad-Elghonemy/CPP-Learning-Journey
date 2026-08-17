#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){

    cout << fixed << setprecision(6);

    // ios_base::sync_with_stdio(sync: false);
    // cin.tie(tiestr: NULL);
    // cout.tie(tiestr: NULL);

    // double x = 1.236785453545;

    // cout << fixed << setprecision(3) << x;

    // int x = 5 , y = 3;

    // cout << x / y << '\n';

    // cout << x % y << '\n';

    // cout << (double)x / y << '\n';

    // cout << (int)ceil((double)x / y) << '\n';

    // cout << (x>1 && y >0) ;

    // (x != y) == !(x == y);

    // int w;

    // cin >> w;

    // if  (w == 2)
    //     cout << "NO";
    
    // else if(w%2==0)
    //     cout << "YES";
    
    // else
    //     cout << "NO";

    int t;

    cin >> t;

    while(t--){

        char op;
        cin >> op;

        if(op == 'c' ||op == 'o' ||op == 'd' ||op == 'e' ||op == 'f' ||op == 'r' ||op == 's')
            cout << "YES\n";

        else    
            cout << "NO\n";
    }

    

    return 0;
}