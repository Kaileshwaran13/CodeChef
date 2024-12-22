#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, x, y, z;
    cin >> tt;
    while(tt--){
        cin >> x >> y >> z;
        if( max(x,max(y,z)) == x ){
            cout << "Setter" << '\n';
        }
        else if( max(x,max(y,z)) == y ){
            cout << "Tester" << '\n';
        }
        else{
            cout << "Editorialist" << '\n';
        }
    }
}
