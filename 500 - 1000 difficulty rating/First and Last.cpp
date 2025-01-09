#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, size;
    cin >>tt;
    while(tt--){
        cin >>size;
        int arr[size] = {0};
        for(int i = 0; i < size; i++){
            cin >>arr[i];
        }
        int ans = arr[0] + arr[size - 1];
        for(int i = 0; i < size - 1; i++){
            ans = max(ans,(arr[i]+arr[i+1]));
        }
        cout << ans << '\n';
    }
    

}
