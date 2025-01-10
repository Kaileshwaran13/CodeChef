#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, num, count;
    string str;
    cin >> tt;
    while(tt--){
        count = 0;
        cin >> num;
        cin >>str;
        for(int i = 0; i < str.size(); i++){
            if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
                count = 0;
            }
            else{
                count++;
                if( count == 4){
                    break;
                }
            }
        }
        if(count == 4){
            cout << "NO" << '\n';
        }else {
            cout << "YES" << '\n';
        }
    }
}
