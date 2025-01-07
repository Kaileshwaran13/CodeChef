#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, num, count1, count2;
    string str;
    cin >> tt;
    while(tt--){
        count1 = 0;
        count2 = 0;
        cin >> num;
        while(num--){
            cin >> str;
            if(str[0] == 'S'){
                count1++;
            }
            else{
                count2++;
            }
        }
        cout << count1 << " " <<count2 <<'\n';
    }

}
