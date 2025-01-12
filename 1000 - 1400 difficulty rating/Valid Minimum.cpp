#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, num1, num2, num3, count, minVal;
    cin >> tt;
    while(tt--){
        minVal = 100;
        count = 0;
        cin >> num1 >> num2 >> num3;
        minVal = min(num1, min(num2,num3));
        if( num1 == minVal){
            count++;
        }
        if(num2 == minVal){
            count++;
        }
        if(num3 == minVal){
            count++;
        }
        if( count >= 2 ){
            cout << "YES" << '\n';
        }
        else{
            cout << "NO" << '\n';
        }
    }

}
