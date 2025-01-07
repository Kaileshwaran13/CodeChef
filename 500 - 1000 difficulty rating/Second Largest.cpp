#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, a, b, c, maxVal, minVal;
    cin >> tt;
    while(tt--){
        cin >>a >> b >> c;
        maxVal = max(a,max(b,c));
        minVal = min(a,min(b,c));
        if(a != maxVal && a != minVal){
            cout << a << '\n';
        }
        else if(b != maxVal && b != minVal){
            cout << b << '\n';
        }
        else{
            cout << c <<'\n';
        }
    }

}
