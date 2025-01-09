#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, num, c, n;
    cin >> tt;
    string str;
    while(tt--){
        c = 0;
        n = 0;
        cin >> num;
        cin >> str;
        for(int i = 0; i < str.size(); i++){
            if( str[i] == 'C' ){
                c += 2;
            }
            else if(str[i] == 'D'){
                c++;
                n++;
            }
            else{
                n += 2;
            }
        }
        if(c > n){
            cout << num * 60 << '\n';
        }
        else if( c == n ){
            cout << num * 55 << '\n';
        }
        else{
            cout << num * 40 << '\n'; 
        }
    }
}
