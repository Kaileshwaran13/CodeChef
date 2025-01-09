#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, num, score1, score2;
    cin >>tt;
    while(tt--){
        score1 = 0;
        score2 = 0;
        for(int i = 1; i <= 10; i++){
            cin >> num;
            if( i % 2 != 0 && num == 1){
                score1++;
            }
            else if( i % 2 == 0 && num == 1){
                score2++;
            }
        }
        if(score1 < score2){
            cout << 2 << '\n';
        }
        else if( score1 == score2){
            cout << 0 << '\n';
        }
        else{
            cout << 1 <<'\n';
        }
    }

}
