#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, a, b, c, d;
    cin >> tt;
    while(tt--){
        cin >> a >> b >> c >>d;
        if( a + (c * 10) < b + (d * 10) ){
            cout << "Chef" <<'\n';
        }
        else if(a + (c * 10) ==  b + (d *10) ){
            cout << "Draw" << '\n';
        }
        else{
            cout <<"Chefina" <<'\n';
        }
    }

}
