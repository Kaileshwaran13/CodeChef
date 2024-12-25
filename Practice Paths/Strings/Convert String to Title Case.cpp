#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, i;
    cin >> tt;
    string str;
    for(int i = 0; i <= tt; i++){
        getline(cin, str);
        for(int j = 0; j < str.size(); j++){
            if( (j == 0 && islower(str[j])) || ( str[j - 1] == ' '  && islower(str[j]) ) || j == str.size() - 1 && isupper(str[j]) && isupper(str[j - 1]) ) 
                cout << char(toupper(str[j]));
            else{
                if(isupper(str[j]) && islower(str[j + 1]) ){
                    cout << char(tolower(str[j]));
                }
                else{
                    cout << str[j];
                }
            }
        }
        cout << '\n';
    }

}
