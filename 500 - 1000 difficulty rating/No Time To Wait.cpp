#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;
    int arr[n] = {0};
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if( arr[i] + b >= a){
            cout <<"YES" <<'\n';
            break;
        }
        else{
            if( i == n - 1)
                cout <<"NO" <<'\n';
        }
    }
    
}
