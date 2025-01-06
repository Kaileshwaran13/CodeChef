#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, a, b, c, d;
    cin >> tt;
    float ans1 = 0, ans2 = 0;
    while(tt--){
        cin >> a >> b >>c >> d;
        ans1 = float(a) / float(c) ;
        ans2 = float(b) / float(d);
        if( ans1 < ans2 ){
            cout << "Bob" <<'\n';
        }
        else if( ans1 == ans2 ){
            cout <<"Equal" <<'\n';
        }
        else{
            cout <<"Alice" << '\n';
        }
    }

}
