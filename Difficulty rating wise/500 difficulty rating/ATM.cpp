#include <bits/stdc++.h>
using namespace std;

int main() {
    float x, y;
    cin >> x >> y;
    float val;
    if( y >= (x + 0.50) && int(x) % 5 == 0){
        cout << fixed << setprecision(2) << (y - x) - 0.50;
    }
    else{
        cout << y;
    }
}
