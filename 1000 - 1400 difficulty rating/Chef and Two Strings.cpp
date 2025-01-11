#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt;
    string str1, str2;
    cin >> tt;
    while(tt--){
        cin >> str1 >> str2;
        int min = 0, max = 0;
        for(int i = 0; i < str1.size(); i++){
            if( str1[i] != '?' && str2[i] != '?' && str1[i] !=str2[i] ){
                min++;
                max++;
            }
            else if( str1[i] == '?' && str2[i] != '?' || str1[i] != '?' && str2[i] == '?' || str1[i] == '?' && str2[i] == '?'){
                max++;
            }
        }
        cout << min << " " << max << '\n';
    }

}
