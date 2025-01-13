#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, num1, num2, maxDiff, maxPerson, val1 = 0, val2 = 0;
    cin >> tt;
    maxDiff = 0;
    maxPerson = 0;
    while(tt--){
        cin >> num1 >> num2;
        val1 += num1;
        val2 += num2;
        if( val1 > val2){
            if(maxDiff < (val1 - val2)){
                maxPerson = 1;
                maxDiff = val1 - val2;
            }
        }
        if( val1 < val2){
            if(maxDiff < (val2 - val1)){
                maxPerson = 2;
                maxDiff = val2 - val1;
            }
        }
    }
    cout << maxPerson << " " << maxDiff << '\n';

}
