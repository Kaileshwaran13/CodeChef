#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt;
    string str1, str2;
    cin >> tt;
    while(tt--){
        cin >> str1 >> str2;
        for(int i = 0; i < 5; i++){
            if(str1[i] == str2[i]){
                cout << 'G';
            }
            else{
                cout << 'B';
            }
        }
        cout <<'\n';
    }

}
