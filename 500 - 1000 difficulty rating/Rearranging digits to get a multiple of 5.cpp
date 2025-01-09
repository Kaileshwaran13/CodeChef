#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, num, ans = 0;
    string str;
    cin >>tt;
    while(tt--){
        ans = 0;
        cin >> num;
        cin >> str;
        // cout <<str <<'\n';
        for(int i = 0; i < num; i++){
            if(str[i] == '5' || str[i] == '0'){
                ans = 1;
                break;
            }
        }
        if(ans == 1){
            cout <<"YES" << '\n';
        }
        else{
            cout << "NO" <<'\n';
        }
    }
    

}
