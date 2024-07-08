#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int n, k, count;
    while(t--){
        cin >> n >> k;
        int arr[n] = {0};
        count = 0;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            if(arr[i] > k)
                count++;
        }
        cout << count << '\n';
    }
}
