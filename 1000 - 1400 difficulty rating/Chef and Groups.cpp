#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, val, count;
    string str;
    cin >> tt;
    while(tt--){
        val = 0;
        count = 0;
        cin >> str;
        for(int i = 0; i < str.size(); i++){
            if(str[i] == '1'){
                val++;
            }
            if(str[i] == '0' && val > 0){
                val = 0;
                count++;
            }
        }
        if( val > 0){
            cout << count + 1  << '\n';
        }
        else{
            cout << count << '\n';
        }
        
    }

}
