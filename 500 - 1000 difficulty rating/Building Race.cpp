#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt;
    double a, b, c, d;
    cin >>tt;
    while(tt--){
        cin >> a >> b >> c >> d;
        if( (a/c) == (b/d)){
            cout << "Both" << '\n';
        }
        else if( (a/c) > (b/d)){
            cout << "Chefina" << '\n';
        }
        else {
            cout << "Chef" << '\n';
        }
    }

}
