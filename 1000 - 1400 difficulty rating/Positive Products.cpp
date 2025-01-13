#include <bits/stdc++.h>
using namespace std;

int main() {
    long tt, size, negative,possitive;
    cin>> tt;
    while(tt--){
        negative = 0;
        possitive = 0;
        cin >> size;
        long arr[size] = {0};
        for(long i = 0; i < size; i++){
            cin >> arr[i];
            if(arr[i] < 0){
                negative++;
            }else if( arr[i] > 0){
                possitive++;
            }
            
        }
        cout << (negative * (negative-1)) / 2 +  (possitive * (possitive - 1)) / 2 << '\n';
        
    }

}
