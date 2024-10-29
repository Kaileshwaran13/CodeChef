#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int d[n];
        for(int i=0;i<n;i++){
            cin>>d[i];
        }
        int flag = 0;
        for(int i = 0; i< n - 1; i++){
            if(d[i] <= d[i + 1]){
                continue;
            }else{
                cout << "NO" << '\n';
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            cout << "YES" << '\n';
        }
        // your code goes here
    }

}