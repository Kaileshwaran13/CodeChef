#include <bits/stdc++.h>
using namespace std;

int main() {
    long long tt, size, x;
    float even, odd;
    cin >>tt;
    while(tt--){
        cin >> size >> x;
        long long arr[size];
        odd = 0;
        even = 0;
        for(int i = 0; i < size; i++){
            cin >> arr[i];
            if( arr[i] % 2 == 0){
                even++;
            }
            else{
                odd++;
            }
        }
        if( x % 2 !=0 ){
            cout << ceil(even/ 2) <<'\n';
        }
        else{
            if(odd == 0){
                cout << -1 << '\n';
            }
            else{
                cout << even << '\n';
            }
        }
        
    }

}
