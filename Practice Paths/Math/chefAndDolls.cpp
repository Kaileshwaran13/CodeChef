#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int n;
    while(t--){
        cin >> n;
        int arr[n] = {0};
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        sort(arr,arr+n);
        for(int i = 0; i < n; i++){
            if(arr[i] == arr[i + 1]){
                i++;
                continue;
            }else{
                cout << arr[i] << " ";
            }
        }
        cout << '\n';
    }
}