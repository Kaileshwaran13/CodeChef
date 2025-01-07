#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, num, count;
    cin >> tt;
    string str;
    while(tt--){
        cin >>num;
        cin >> str;
        sort(str.begin(), str.end());
        for(int i = 0; i < str.size(); i++){
            if(str[i] == str[i + 1]){
                str[i] = '0';
                str[i+1] = '0';
            }
        }
        count = 0;
        for(int i = 0; i < str.size(); i++){
            if(str[i] != '0'){
                count = 1;
                break;
            }
        }
        if(count == 0){
            cout <<"YES" <<'\n';
        }
        else{
            cout <<"NO" <<'\n';
        }
        
    }

}
