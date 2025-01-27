#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt;
    cin >> tt;
    int a, b, c, d;
    while(tt--){
        cin >> a >> b >> c >> d;
        int alex = a * a + b * b;
        int bob = c * c + d * d;
        if(alex > bob){
            cout << "ALEX" << '\n';
        }
        else if(alex == bob){
            cout << "EQUAL" << '\n';
        }
        else{
            cout << "BOB" << '\n';
        }
    }
}
