#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int n;
    while(t--){
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        int count = 0;
        for(int i = 1; i < n; i++){
            if(i == 1 && arr[1] != arr[0]){
                count += 2;
            }else if(arr[i - 1] != arr[i]){
                count++;
            }
            else if((i != n - 1) && (arr[i] != arr[i + 1])){
                count++;
            }
        }
        cout << count << '\n';
    }
}
