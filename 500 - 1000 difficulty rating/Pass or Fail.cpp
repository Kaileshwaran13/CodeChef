#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, x, y, z, possitiveMarks, negativeMarks;
    cin >> tt;
    while(tt--){
        possitiveMarks = 0;
        negativeMarks = 0;
        cin >> x >> y >> z;
        negativeMarks = x - y;
        possitiveMarks = y * 3;
        if(possitiveMarks - negativeMarks >= z){
            cout <<"PASS" << '\n';
        }
        else{
            cout << "FAIL" << '\n';
        }
    }

}
