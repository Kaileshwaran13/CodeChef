#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, size, sum;
    cin >>tt;
    while(tt--){
        cin >> size;
        long long int money[size], sum = 0;
        for(int i = 0; i < size; i++){
            cin >> money[i];
            sum += money[i];
        }
        int ans = 0;
        double mean = sum / (size *1.0);
        for(int i = 0; i < size; i++){
            if( mean == money[i] ){
                ans = i + 1;
                break;
            }
        }
        if( ans == 0){
            cout << "IMPOSSIBLE" <<'\n';
        }
        else{
            cout << ans <<'\n';
        }
        
    }

}
