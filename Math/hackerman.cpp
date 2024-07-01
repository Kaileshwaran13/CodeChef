#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int a , b, val, flag;
    while(t--){
        val = 0;
        flag = 0;
        cin >> a >> b;
        val = a + b;
        for(int i = val - 1; i > 1; i--){
            if (val % i != 0){
                continue;
            }else{
                flag = 1;
                break;
            }
        }
        if(flag == 1){
            cout << "Bob" << '\n';
        }else{
            cout << "Alice" << '\n';
        }
    }
}