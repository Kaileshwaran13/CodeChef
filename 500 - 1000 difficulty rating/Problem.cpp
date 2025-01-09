#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, num1, num2, count;
    cin >>tt;
    while(tt--){
        count = 0;
        cin >> num1 >> num2;
        if(abs(num1 - num2) %2 == 0){
            cout << "YES" <<'\n';
        }
        else{
            cout << "NO" <<'\n';
        }
    }

}
