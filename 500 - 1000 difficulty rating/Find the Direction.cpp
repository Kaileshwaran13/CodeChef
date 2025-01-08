#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, num, count;
    cin >> tt;
    while(tt--){
        count = 0;
        cin >>num;
        for(int i = 0; i <num; i++){
            if( count == 4){
                count = 0;
                
            }
            count++;
        }
        if( count % 4 == 0){
            cout <<"North" <<'\n';
        }
        else if( count % 3 == 0){
            cout <<"West" <<'\n';
        }
        else if( count % 2 == 0){
            cout <<"South" <<'\n';
        }
        else{
            cout <<"East" <<'\n';
        }
    }
}
