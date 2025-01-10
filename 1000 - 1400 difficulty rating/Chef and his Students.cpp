#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, count;
    cin >> tt;
    string str;
    while(tt--){
        cin >> str;
        count = 0;
        for(int i = 0; i < str.size(); i++){
            if(str[i] == '<' && str[i + 1] == '>'){
                count++;
                i++;
            }
        }
        cout << count << '\n';
    }

}
