#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, sum;
    cin >> t;
    while(t--){
        int arr[8] = {0};
        int n;
        cin >> n;
        while(n--){
            int p, s;
            cin >> p >> s;
            if(arr[p-1] < s ){
                arr[p-1] = s;
            }else{
                continue;
            }
        }
        sum = 0;
        for(int i= 0; i < 8; i++){
            if(arr[i] > 0){
                sum += arr[i];
            }
        }
        cout << sum << '\n';
    }

}
