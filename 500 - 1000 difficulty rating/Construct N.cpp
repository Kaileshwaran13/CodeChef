#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, num, twoCount, sevenCount;
    cin >> tt;
    while(tt--){
        twoCount = 0;
        sevenCount = 0;
        cin >> num;
        if(num / 7 > 0){
            sevenCount = num / 7;
            num %= 7;
        }
        else{
            if(num % 2 == 0){
                twoCount = num / 2;
            }
            else{
                twoCount = -1;
            }
        }
        if( twoCount != -1){
            cout <<"YES" <<'\n';
        }
        else{
            cout << "NO" << '\n';
        }
    }

}
