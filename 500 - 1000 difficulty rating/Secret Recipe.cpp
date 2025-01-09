#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt,a, b, c, d, e;
    cin >> tt;
    float diff1, diff2;
    while(tt--){
        cin >> a >> b >> c >> d >> e;
        diff1 = abs(a - c);
        diff2 = abs(b - c);
        diff1 /= d;
        diff2 /= e;
        if( diff1 < diff2){
            cout << "Chef" <<'\n';
        }
        else if(diff1 > diff2){
            cout << "Kefa" << '\n';
        }
        else{
            cout << "Draw" <<'\n';
        }
        
    }

}
