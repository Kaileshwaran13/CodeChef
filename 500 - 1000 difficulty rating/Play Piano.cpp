#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, count;
    cin >>tt;
    string str;
    while(tt--){
        count= 0;
        cin >> str;
        for(int i = 0; i < str.size(); i += 2){
            if( (str[i] == 'A' && str[i + 1] != 'B') ||  (str[i] == 'B' && str[i + 1] != 'A') ){
                cout << "NO" <<'\n';
                count = 0;
                break;
            }
            else{
                count = 1;
            }
        }
        if(count == 1){
            cout << "YES" <<'\n';
        }
    }
}
