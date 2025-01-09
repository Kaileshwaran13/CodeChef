#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, num;
    cin >> tt;
    while(tt--){
        cin >>num;
        if( num % 5 != 0){
            cout << -1 <<'\n';
        }
        else if(num % 10 == 0){
            cout << 0 << '\n';
        }
        else{
            for(int i = 0; i < 100; i++){
                num *= 2;
                if(num % 10 == 0)
                    cout << i +1 <<'\n';
                    break;
            }
        }
    }

}
