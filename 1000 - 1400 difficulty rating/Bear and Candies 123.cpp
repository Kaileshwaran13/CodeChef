#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, limak, bob, i, val1, val2;
    cin >> tt;
    while(tt--){
        cin >> limak >> bob;
        for(int i = 0; i < 100; i++){
            if( i % 2 != 0){
                limak -= i;
                if(limak < 0){
                    cout << "Bob" << '\n';
                    break;
                }
            }
            else{
                bob -= i;
                if( bob < 0){
                    cout << "Limak" << '\n';
                    break;
                }
            }
        }
    }
}
