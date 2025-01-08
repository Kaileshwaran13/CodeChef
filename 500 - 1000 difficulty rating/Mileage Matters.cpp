#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt;
    float d, a, b, x, y;
    cin >>tt;
    while(tt--){
        cin >> d >> a >> b >> x >> y;
        a = (d / x * a);
        b = (d / y * b);
        if( a < b){
            cout << "PETROL" <<'\n';
        }
        else if (a == b){
            cout << "ANY" <<'\n';
        }
        else{
            cout << "DIESEL" << '\n';
        }
    }

}
