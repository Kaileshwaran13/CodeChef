#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, a, b;
    cin >> tt;
    while(tt--){
        cin >> a >> b;
        if( a == b){
            cout << '=' << '\n';
        }
        else if(a < b){
            cout << '<' << '\n';
        }
        else{
            cout << '>' << '\n';
        }
    }

}
