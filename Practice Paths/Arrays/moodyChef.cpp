#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int n, l, r;
    while(t--){
        cin >> n >> l >> r;
        int arr[n] = {0}, minValue = 0, maxValue = 0, count = 0;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            if(arr[i] >= l && arr[i] <= r){
                count++;
            }else{
                count--;
            }
            minValue = min(minValue, count);
            maxValue = max(maxValue, count);
        }
        cout << maxValue << " " << minValue << '\n';
    }
}
